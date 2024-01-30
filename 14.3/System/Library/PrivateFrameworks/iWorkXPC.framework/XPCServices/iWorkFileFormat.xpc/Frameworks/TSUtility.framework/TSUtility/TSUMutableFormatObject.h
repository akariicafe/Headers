@interface TSUMutableFormatObject : TSUFormatObject

@property (nonatomic) struct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; } x1; } formatStruct;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFormatStruct:(struct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; } x1; })a0;

@end
