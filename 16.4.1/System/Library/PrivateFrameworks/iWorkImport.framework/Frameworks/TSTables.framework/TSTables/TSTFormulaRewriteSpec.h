@class TSTFormulaRewrite_PivotInfo;

@interface TSTFormulaRewriteSpec : TSCEFormulaRewriteSpec

@property (retain, nonatomic) TSTFormulaRewrite_PivotInfo *pivotInfo;

- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initForCategorizedTableBaseToChromeRewriterWithSrcTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 srcTract:(const void *)a1 dstTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 destTract:(const void *)a3 coordMapper:(id)a4;
- (id)initForCategorizedTableChromeToBaseRewriterWithSrcTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 srcTract:(const void *)a1 dstTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 destTract:(const void *)a3 coordMapper:(id)a4 srcCoordMapper:(id)a5 fromTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a6;
- (id)initForGroupBy:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 groupNodeUIDReassignment:(const void *)a1;
- (id)initForGroupBy:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 withGroupByChange:(id)a1;
- (id)initForInsertingRowsOrColumnsIntoTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 rowColumnUuids:(const void *)a1 areRows:(BOOL)a2;
- (id)initForMergeCellsWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 columnUids:(const void *)a1 rowUids:(const void *)a2 mergeSource:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3;
- (id)initForMergeOriginsMovedWithMap:(const void *)a0 reverseMap:(const void *)a1 inTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)initForMovingRegionWithSrcTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 srcTract:(const void *)a1 dstTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 destTract:(const void *)a3;
- (id)initForMovingRowsOrColumnsInTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 rowColumnUuids:(const void *)a1 shuffleMap:(id)a2 areRows:(BOOL)a3 srcTract:(const void *)a4 destTract:(const void *)a5;
- (id)initForPastingCellsWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 columnUids:(const void *)a1 rowUids:(const void *)a2;
- (id)initForRemoveRowsOrColumnsFromTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 rowColumnUuids:(const void *)a1 areRows:(BOOL)a2;
- (id)initForReorderRowsWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 rowUids:(const void *)a1 shuffleMap:(id)a2;
- (id)initForSortWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 rowUids:(const void *)a1 shuffleMap:(id)a2;
- (id)initForTableUIDReassignment:(const void *)a0;
- (id)initForUndoMergeCellsWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 columnUids:(const void *)a1 rowUids:(const void *)a2 mergeSource:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3;
- (id)initWithOwnerDeletion:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithOwnerInsertion:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 fromOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithPivotRuleChange:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithTransposeTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 transposedBodyRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a1 numberOfFooterRows:(unsigned int)a2;

@end
