@class TSCECalculationEngine, NSString, TSCECellCoordinateVector, TSTTableModel;

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning> {
    TSCECalculationEngine *_calcEngine;
    TSCECellCoordinateVector *_cellsToInvalidate;
}

@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (nonatomic) TSTTableModel *tableModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allCondStyleFormulasForTable:(id)a0;

- (void).cxx_destruct;
- (long long)evaluationMode;
- (id)initWithTableModel:(id)a0;
- (struct TSCERecalculationState { unsigned char x0; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)writeResultsForCalcEngine:(id)a0;
- (void)addFormulaForConditionalStyle:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)changedConditionForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)checkConditionForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withConditionalStyle:(id)a1 withIndex:(unsigned long long *)a2;
- (id)initWithTableModel:(id)a0 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)removeFormulaAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)removeFormulasInRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)replaceFormulaForConditionalStyle:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)unregisterFromCalcEngine;

@end
