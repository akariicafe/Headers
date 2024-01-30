@class TSCECalculationEngine, NSString, TSCETrackedReferenceStore, TSTTableInfo;

@interface TSTSortRuleReferenceTracker : NSObject <TSCEFormulaOwning> {
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _ownerUID;
    TSCECalculationEngine *_calcEngine;
    TSCETrackedReferenceStore *_trackedRefsStore;
    BOOL _isRegisteredWithCalculationEngine;
}

@property (weak, nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } baseTableUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)evaluationMode;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (struct TSCERecalculationState { unsigned char x0; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (id)initFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (struct TSCERecalculationState { unsigned char x0; })multiEvaluateFormulasAt:(const void *)a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (unsigned short)ownerKind;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })ownerUID;
- (void)writeResultsForCalcEngine:(id)a0;
- (void)beginTrackingReference:(id)a0;
- (id)beginTrackingReferenceWithSpanningRef:(const struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } *)a0;
- (void)endTrackingReference:(id)a0;
- (id)initWithTableInfo:(id)a0 baseTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 context:(id)a2;
- (unsigned short)p_columnForTrackedReference:(id)a0;
- (BOOL)p_hasRuleReferenceForTrackedReference:(id)a0;
- (struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; })p_referenceForColumnIndex:(unsigned short)a0;
- (void)registerWithCalcEngine:(id)a0;
- (void)registerWithCalcEngine:(id)a0 reregister:(BOOL)a1;
- (void)setOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)unregisterFromCalcEngine;
- (void)updateForSortRules:(id)a0;

@end
