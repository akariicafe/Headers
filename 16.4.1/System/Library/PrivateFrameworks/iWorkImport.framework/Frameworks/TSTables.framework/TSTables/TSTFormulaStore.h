@class TSUSparseArray, TSCECalculationEngine;

@interface TSTFormulaStore : NSObject {
    TSUSparseArray *_formulas;
    unsigned long long _nextIndex;
}

@property (nonatomic) BOOL usesOnlyFixedCoords;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } formulaOwnerUID;
@property (weak, nonatomic) TSCECalculationEngine *calcEngine;

+ (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })coordFromIndex:(unsigned long long)a0;
+ (unsigned long long)indexFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
+ (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })rangeFromFormulaObject:(id)a0 atCoord:(const struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } *)a1;
+ (id)createFormulaForUIDRange:(const void *)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
+ (id)createFormulaForUIDTract:(const void *)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
+ (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })rangeFromFormulaObject:(id)a0 atCoord:(const struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } *)a1 useBoundingRange:(BOOL)a2;
+ (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })tableUIDFromFormula:(id)a0 atCoord:(const struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } *)a1;

- (unsigned long long)maxIndex;
- (void)foreach:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)formulaCount;
- (unsigned long long)markForRollback;
- (void)rollbackToMark:(unsigned long long)a0;
- (unsigned long long)appendIndexedFormula:(id)a0;
- (void)clearFormulaAtIndex:(unsigned long long)a0;
- (void)clearFormulaAtIndex:(unsigned long long)a0 formulaReplacer:(id)a1;
- (id)createFormulaObjectForRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 atIndex:(unsigned long long)a1 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)formulaObjectAtIndex:(unsigned long long)a0;
- (id)initWithOwnerUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 archive:(const void *)a1 unarchiver:(id)a2;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })rangeFromFormulaAtIndex:(unsigned long long)a0 useBoundingRange:(BOOL)a1;
- (void)registerAllFormulaToCalculationEngine;
- (void)remapRangeFormulasToOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })reserveNextCoordinate;
- (unsigned long long)reserveNextIndex;
- (void)setFormulaObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFormulaObject:(id)a0 atIndex:(unsigned long long)a1 formulaReplacer:(id)a2;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })tableUIDFromFormulaAtIndex:(unsigned long long)a0;

@end
