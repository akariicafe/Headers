@interface TNMutableChartFormulaStorage : TNChartFormulaStorage

- (void)setDirection:(int)a0;
- (void)addFormula:(id)a0 withFormulaID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)initWithChartFormulaStorage:(id)a0;
- (id)mutableFormulaListForType:(unsigned long long)a0;
- (void)setFormulaList:(id)a0 forKey:(unsigned long long)a1;
- (unsigned long long)numberOfGroupsWithCalcEngine:(id)a0 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (void)clearFormulaListForKey:(unsigned long long)a0;

@end
