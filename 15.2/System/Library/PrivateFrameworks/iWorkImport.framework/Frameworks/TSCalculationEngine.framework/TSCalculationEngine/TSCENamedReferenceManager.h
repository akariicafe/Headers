@class NSString, TSCETrackedReferenceStore, TSCECalculationEngine;

@interface TSCENamedReferenceManager : TSPObject <TSCEFormulaOwning> {
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _ownerUID;
    TSCETrackedReferenceStore *_trackedRefsStore;
    TSCETrackedReferenceStore *_weakTrackedRefsStore;
    BOOL _isRegisteredWithCalculationEngine;
}

@property (weak) TSCECalculationEngine *calcEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willClose;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (long long)evaluationMode;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)formulaOwner;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })formulaOwnerUID;
- (unsigned short)ownerKind;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })ownerUID;
- (id)linkedResolver;
- (void)writeResultsForCalcEngine:(id)a0;
- (void)invalidateForCalcEngine:(id)a0;
- (struct TSCERecalculationState { unsigned char x0; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (struct TSCERecalculationState { unsigned char x0; })multiEvaluateFormulasAt:(const void *)a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (void)setFormulaOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)setCalculationEngine:(id)a0;
- (void)registerWithCalcEngine:(BOOL)a0;
- (BOOL)trackedReferencesExistForTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)beginTrackingNamesInTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 limitedToRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a1;
- (void)beginTrackingNamesInRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0 ofTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 addingTrackedReferencesTo:(id)a2;
- (void)beginTrackingNameInCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 ofTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 addingTrackedReferencesTo:(id)a2;
- (id)beginTrackingReferenceWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)endTrackingReference:(id)a0;
- (void)beginTrackingReference:(id)a0;
- (id)trackedReferenceAtCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)endTrackingNamesInTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)beginTrackingNamesInTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1;
- (void)updateTrackedHeaders:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)unregisterFromCalcEngine;

@end
