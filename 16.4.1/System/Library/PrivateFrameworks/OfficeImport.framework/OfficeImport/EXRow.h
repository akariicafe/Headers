@interface EXRow : NSObject

+ (id)createFormulaReferenceRangeForRowBlocks:(id)a0;
+ (void)edRowFrom:(struct _xmlTextReader { } *)a0 edRowInfo:(struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)a1 edRowBlock:(id)a2 edRowBlocks:(id)a3 state:(id)a4;
+ (void)readRowsFrom:(struct _xmlTextReader { } *)a0 state:(id)a1;

@end
