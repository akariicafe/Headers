@interface EBFont : NSObject

+ (int)convertEDScriptEnumToXl:(int)a0;
+ (int)convertEDUnderlineEnumToXl:(int)a0;
+ (int)convertXlScriptEnumToED:(int)a0;
+ (int)convertXlUnderlineEnumToED:(int)a0;
+ (id)edFontFromXlDXfFont:(struct XlDXfFont { void /* function */ **x0; struct XlString *x1; int x2; int x3; short x4; int x5; int x6; unsigned char x7; unsigned char x8; int x9; int x10; unsigned int x11; unsigned int x12; unsigned int x13; int x14; int x15; int x16; int x17; short x18; } *)a0 edResources:(id)a1;
+ (id)edFontFromXlFont:(struct XlFont { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; struct XlString *x2; short x3; short x4; short x5; int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; int x13; unsigned char x14; unsigned char x15; } *)a0 edResources:(id)a1;

@end
