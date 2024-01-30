@interface WBListLevel : NSObject

+ (int)numberFormatEnumFor:(int)a0;
+ (void)readFrom:(id)a0 listLevel:(id)a1 format:(struct WrdListLevelFormat { void /* function */ **x0; struct WrdParagraphProperties *x1; struct WrdCharacterProperties *x2; int x3; unsigned short x4; int x5; int x6; int x7; unsigned char x8[9]; int x9; int x10; unsigned short x11; unsigned short *x12; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; } *)a2 document:(id)a3;
+ (void)write:(id)a0 listLevel:(id)a1 format:(struct WrdListLevelFormat { void /* function */ **x0; struct WrdParagraphProperties *x1; struct WrdCharacterProperties *x2; int x3; unsigned short x4; int x5; int x6; int x7; unsigned char x8[9]; int x9; int x10; unsigned short x11; unsigned short *x12; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; } *)a2;

@end
