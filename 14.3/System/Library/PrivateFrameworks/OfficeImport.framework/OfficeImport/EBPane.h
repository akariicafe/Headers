@interface EBPane : NSObject

+ (void)readXlPaneFrom:(struct XlSheetPresentation { void /* function */ **x0; struct XlWindow2 *x1; struct XlScl *x2; struct XlPane *x3; struct XlSelection *x4[4]; } *)a0 state:(id)a1;
+ (void)writePaneForSheet:(id)a0 toXlSheetPresentation:(struct XlSheetPresentation { void /* function */ **x0; struct XlWindow2 *x1; struct XlScl *x2; struct XlPane *x3; struct XlSelection *x4[4]; } *)a1 xlWindow2:(struct XlWindow2 { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; int x2; short x3; short x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; unsigned short x17; short x18; } *)a2;

@end
