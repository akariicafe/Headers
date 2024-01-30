@interface WBFont : NSObject

+ (id)readFrom:(const struct WrdFontFamilyName { void /* function */ **x0; struct CsString { void /* function */ **x0; unsigned short *x1; unsigned int x2; unsigned int x3; } x1; struct CsString { void /* function */ **x0; unsigned short *x1; unsigned int x2; unsigned int x3; } x2; int x3; char *x4; char *x5; unsigned short x6; BOOL x7; unsigned char x8; unsigned char x9; unsigned char x10; } *)a0 withFontTable:(id)a1;
+ (void)write:(id)a0 to:(struct WrdFontFamilyName { void /* function */ **x0; struct CsString { void /* function */ **x0; unsigned short *x1; unsigned int x2; unsigned int x3; } x1; struct CsString { void /* function */ **x0; unsigned short *x1; unsigned int x2; unsigned int x3; } x2; int x3; char *x4; char *x5; unsigned short x6; BOOL x7; unsigned char x8; unsigned char x9; unsigned char x10; } *)a1;

@end
