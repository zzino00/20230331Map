#include <iostream>// ��ó���� main�������� �̸� ����Ǵ� ���̺귯��
#include<conio.h>

using namespace std;// ������ std::cout �̷������� ����ϴµ� �������ϱ� ������������ standard(std)���� ã�ƶ� ��¶�



//entry point �����ϴ� ��
int main()
{
	int Map[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1},

	};

	int PlayerX = 1;
	int PlayerY = 1;
	bool IsRunning = true;
	while (IsRunning)
	{
		char Key;
		Key = _getch(); 

		if (Key == 'd')
		{
			PlayerX++;
		}
		else if(Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'q')
		{
			IsRunning = false;
		}
		system("cls");
		
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				if (Map[Y][X] == 1)
				{
					cout << "# ";

				}
				else if (Map[Y][X] == 0)
				{
					cout << "  ";

				}


			}
			cout << endl;

		}
		
	}
	return 0;
}

