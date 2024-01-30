@interface TNMutableChartFormulaStorage : TNChartFormulaStorage

- (void)setDirection:(int)a0;
- (void)setScheme:(int)a0;
- (void)addFormula:(id)a0 withFormulaID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)clearFormulaListForKey:(unsigned long long)a0;
- (id)initWithChartFormulaStorage:(id)a0;
- (id)mutableFormulaListForType:(unsigned long long)a0;
- (unsigned long long)numberOfGroupsWithCalcEngine:(id)a0 inEntity:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 shouldSkipHiddenData:(BOOL)a2;
- (void)setFormulaList:(id)a0 forKey:(unsigned long long)a1;

@end
