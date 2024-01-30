@class TSCECalculationEngine, NSString, TSTFormulaStore, TSTTableModel, TSUSparseArray;

@interface TSTPencilAnnotationOwner : NSObject <TSCEFormulaOwning>

@property (readonly, weak, nonatomic) TSCECalculationEngine *calculationEngine;
@property (readonly, weak, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) TSTFormulaStore *formulaStore;
@property (retain, nonatomic) TSUSparseArray *annotations;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsAnnotation:(id)a0;
- (id)removeAnnotation:(id)a0;
- (void)removeAnnotations:(id)a0;
- (void).cxx_destruct;
- (long long)evaluationMode;
- (void)removeAllAnnotations;
- (id)initWithTableModel:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (struct TSCERecalculationState { unsigned char x0; })multiEvaluateFormulasAt:(const void *)a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (unsigned short)ownerKind;
- (void)writeResultsForCalcEngine:(id)a0;
- (unsigned long long)markForRollback;
- (void)rollbackToMark:(unsigned long long)a0;
- (id)_annotationsForIndexes:(id)a0;
- (id)_annotationsInRows:(id)a0;
- (id)_annotationsIntersectingButNotContainingBaseCellRegion:(id)a0;
- (void)_enumerateAnnotationsAndFormulasWithIndexes:(id)a0 block:(id /* block */)a1;
- (void)_enumerateIndexesIntersectingRegion:(id)a0 block:(id /* block */)a1;
- (id)_indexesContainedByRegion:(id)a0;
- (id)_indexesForRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 startingOnly:(BOOL)a1;
- (id)_indexesForRows:(id)a0;
- (id)_indexesIntersectingButNotContainingBaseCellRegion:(id)a0;
- (unsigned long long)addAnnotation:(id)a0 withAnchorRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (void)addAnnotation:(id)a0 withFormula:(id)a1 atIndex:(unsigned long long)a2;
- (void)addAnnotation:(id)a0 withFormulaObject:(id)a1 atIndex:(unsigned long long)a2;
- (id)annotationsContainedByRegion:(id)a0;
- (id)annotationsStartingInRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })cellRangeForAnnotation:(id)a0;
- (void)enumerateAnnotationsAndFormulasContainedInRegion:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateAnnotationsAndFormulasInRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 withBlock:(id /* block */)a1;
- (void)enumerateAnnotationsWithBlock:(id /* block */)a0;
- (unsigned long long)indexOfAnnotation:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 forTableModel:(id)a2;
- (id)initWithTableModel:(id)a0 ownerUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 annotations:(id)a2 formulaStore:(id)a3;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)remapTableUIDsInFormulasWithMap:(const void *)a0;
- (id)removeAnnotationAtIndex:(unsigned long long)a0;
- (void)unregisterFromCalcEngine;

@end
