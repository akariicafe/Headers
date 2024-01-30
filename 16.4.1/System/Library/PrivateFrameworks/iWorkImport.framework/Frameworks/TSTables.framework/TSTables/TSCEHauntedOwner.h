@class NSString, TSCECalculationEngine;

@interface TSCEHauntedOwner : NSObject <TSCEFormulaOwning> {
    TSCECalculationEngine *_calcEngine;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } baseTableUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })pivotRulesChangedPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })pivotSortChangedPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })summaryModelIsCleanPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })anyHeaderNameChangedPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })filteringChangedPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })formulaDefinitionPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })geometryPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })groupByChangedPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })localePrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })nowPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })randomPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })sheetTableNamePrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })subtotalPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })summaryModelIsCleanForSortPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })todayPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })uniqueDistinctPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })userHiddenChangedPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;

- (void).cxx_destruct;
- (long long)evaluationMode;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })formulaOwnerUID;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (struct TSCERecalculationState { unsigned char x0; })multiEvaluateFormulasAt:(const void *)a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (unsigned short)ownerKind;
- (void)writeResultsForCalcEngine:(id)a0;
- (void)dirtyGeometryVolatileCells;
- (void)dirtyNowAndTodayVolatileCells;
- (void)dirtyNowVolatileCells;
- (void)dirtyRandomVolatileCells;
- (void)dirtySheetTableNameVolatileCells;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 forBaseTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)initWithBaseTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithBaseTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (int)registerWithCalcEngine:(id)a0;
- (void)setCalcEngine:(id)a0;
- (void)unregisterFromCalcEngine;

@end
