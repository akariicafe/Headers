@interface EBCell : NSObject

+ (int)convertEDErrorValueEnumToXl:(int)a0;
+ (int)convertXlCellTypeToED:(int)a0;
+ (int)convertXlErrorEnumToED:(int)a0;
+ (void)readXlCell:(struct XlCell { void /* function */ **x0; unsigned short x1; short x2; short x3; int x4; double x5; struct XlString *x6; int x7; struct XlFormulaInfo *x8; BOOL x9; BOOL x10; BOOL x11; } *)a0 edRowInfo:(struct EDRowInfo **)a1 edRowBlock:(id)a2 edRowBlocks:(id)a3 state:(id)a4;

@end
