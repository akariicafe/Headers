@class TSCEValueGrid, TSCEFormulaObject, NSArray, TNChartVectorWrapper;

@interface TNChartFormulaWrapper : TSKSosBase {
    TSCEFormulaObject *_formulaObject;
    long long _cachedNumberOfValues;
    TNChartVectorWrapper *_cachedOutputValueVector;
    struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct __compressed_pair<TSUCellCoord *, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__value_; } __end_cap_; } _cachedChromeCoords;
    TSCEValueGrid *_cachedValueGrid;
    NSArray *_cachedPlotwiseLabels;
    BOOL _cachedSkipHiddenData;
    BOOL _cachedLabelsByRow;
    BOOL _cachedChromeCoordsRealized;
}

@property (readonly, retain, nonatomic) TSCEFormulaObject *formulaObject;

+ (id)chartFormulaForCategoryRef:(id)a0;
+ (id)chartFormulaForCellReference:(struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a0;
+ (id)chartFormulaForCellRegion:(id)a0 inTable:(id)a1;
+ (id)chartFormulaForRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a0;
+ (id)chartFormulaForString:(id)a0;
+ (id)chartFormulaForTractAsRangeReferences:(id)a0;
+ (id)chartFormulaForTractReference:(id)a0;
+ (id)chartFormulaForViewTractRef:(id)a0;
+ (id)chartFormulaWithFormulaObject:(id)a0;
+ (id)emptyChartFormula;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)clearCacheForCalculationEngine:(id)a0;
- (id)argumentCollectionWithCalcEngine:(id)a0 inChart:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)argumentCollectionWithCalcEngine:(id)a0 inChart:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 storeBadRef:(BOOL)a2;
- (void)enumerateOutputGridForSeries:(unsigned long long)a0 withContext:(void *)a1 byRow:(BOOL)a2 shouldSkipHiddenData:(BOOL)a3 withBlock:(id /* block */)a4;
- (id)formulaByBakingValuesWithCalcEngine:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)formulaByProcessingArgumentsWithCalcEngine:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 usingBlock:(id /* block */)a2;
- (id)formulaByRewriting:(BOOL)a0 withCalcEngine:(id)a1 andHostUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)formulaByTrimmingCategoryLabels:(unsigned long long)a0 plotByRow:(BOOL)a1 calcEngine:(id)a2 inChart:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a3;
- (BOOL)formulaIsEqualTo:(id)a0;
- (id)gridLabelValueAtIndex:(unsigned long long)a0 withEvaluationContext:(void *)a1 byRow:(BOOL)a2 shouldSkipHiddenData:(BOOL)a3;
- (id)initWithFormulaObject:(id)a0;
- (BOOL)isAllStaticValuesWithCalcEngine:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)numberOfGridValuesWithCalcEngine:(id)a0 inChart:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 byRow:(BOOL)a2 shouldSkipHiddenData:(BOOL)a3;
- (unsigned long long)numberOfTotalPlotwiseLabelValuesWithCalcEngine:(id)a0 inChart:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 byRow:(BOOL)a2 shouldSkipHiddenData:(BOOL)a3;
- (unsigned long long)numberOfValuesWithCalcEngine:(id)a0 inChart:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 shouldSkipHiddenData:(BOOL)a2;
- (id)outputGrid:(void *)a0 shouldSkipHiddenData:(BOOL)a1;
- (id)outputGridVectorForSeries:(unsigned long long)a0 withContext:(void *)a1 byRow:(BOOL)a2 shouldSkipHiddenData:(BOOL)a3;
- (id)outputValue:(void *)a0 shouldSkipHiddenData:(BOOL)a1;
- (id)outputValue:(void *)a0 shouldSkipHiddenData:(BOOL)a1 requiresChromeCoords:(BOOL)a2;
- (struct vector<std::pair<TSCEValue, TSUCellCoord>, std::allocator<std::pair<TSCEValue, TSUCellCoord>>> { void *x0; void *x1; struct __compressed_pair<std::pair<TSCEValue, TSUCellCoord> *, std::allocator<std::pair<TSCEValue, TSUCellCoord>>> { void *x0; } x2; })outputVectorValuesWithChromeCoords:(void *)a0 shouldSkipHiddenData:(BOOL)a1;
- (id)plotwiseLabelValuesWithEvaluationContext:(void *)a0 byRow:(BOOL)a1 shouldSkipHiddenData:(BOOL)a2;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })rangeCircumscribingPrecedentsWithCalcEngine:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)stringValueForFormulaWithCalcEngine:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
