@class NSIndexSet, TSCEFormulaRewrite_Uids, TSCEMutableUIDSet, NSArray;

@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject {
    NSArray *_rangeEntries;
    struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } _tableRange;
}

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } conditionalStyleOwnerUID;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } groupByUID;
@property (readonly, nonatomic) BOOL isRows;
@property (readonly, nonatomic) BOOL isColumns;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *rowOrColumnUids;
@property (readonly, nonatomic) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } rowOrColumnUuids;
@property (readonly, nonatomic) NSIndexSet *rowOrColumnIndices;
@property (readonly, nonatomic) TSCEMutableUIDSet *expandedRowColumnUuids;
@property (retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *auxRowColumnInfo;
@property (nonatomic) BOOL useWholeTableForInsertionDependencies;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } insertAtUid;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } insertOppositeUid;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0;
- (struct vector<TSCERangeCoordinate, std::allocator<TSCERangeCoordinate>> { struct TSCERangeCoordinate *x0; struct TSCERangeCoordinate *x1; struct __compressed_pair<TSCERangeCoordinate *, std::allocator<TSCERangeCoordinate>> { struct TSCERangeCoordinate *x0; } x2; })coordRangesForInsertRemove;
- (id)initFromMessage:(const void *)a0;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })tableRange;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })affectedRangeForInsertRows;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })affectedRangeForMoveRows;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })affectedRangeForRemoveRows;
- (unsigned short)columnIndexForUuid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)createAuxRowColumnInfoForMove;
- (BOOL)indexIsAffected:(unsigned int)a0;
- (id)initWithFormulaOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 uuids:(const void *)a1 areRows:(BOOL)a2;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 condStyleOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 groupByUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 uuids:(const void *)a3 atIndexes:(const void *)a4 areRows:(BOOL)a5;
- (BOOL)isForTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)loadIndexesForTable:(id)a0 uidResolver:(id)a1 forRemoveRows:(BOOL)a2 shuffleMap:(id)a3;
- (unsigned int)offsetForRowIndex:(unsigned int)a0;
- (unsigned int)offsetForUpdatedRowIndex:(unsigned int)a0 isRemoveRows:(BOOL)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })orderedUuidsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTable:(id)a1 areRows:(BOOL)a2 shuffleMap:(id)a3;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })originalCellRefForRewriteType:(unsigned int)a0 updatedCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (unsigned int)rowIndexForUuid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)unloadIndexes;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })updatedCellRefForRewriteType:(unsigned int)a0 originalCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })uuidForIndex:(unsigned int)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })uuidsForIndexes:(id)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })uuidsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
