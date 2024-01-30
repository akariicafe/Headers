@class TSTImmutableColumnRowUIDMap, TSTColumnRowUIDMap;

@interface TSTColumnRowUIDMapper : NSObject <TSCEColumnRowUIDMapping> {
    TSTColumnRowUIDMap *_originalUIDMap;
    unsigned long long _originalVersionCounter;
    TSTImmutableColumnRowUIDMap *_copiedUIDMap;
}

@property (readonly, nonatomic) unsigned short numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned long long versionCounter;

- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })range;
- (void)disconnect;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })columnUIDForColumnIndex:(unsigned short)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })rowUIDForRowIndex:(unsigned int)a0;
- (unsigned int)rowIndexForRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableColumnIndexesForUIDs:(const void *)a0;
- (id)mutableRowIndexesForUIDs:(const void *)a0;
- (unsigned short)columnIndexForColumnUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })columnUIDsForColumnIndexes:(id)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })rowUIDsForRowIndexes:(id)a0;
- (id)UIDSetForIndexes:(id)a0 isRows:(BOOL)a1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })tableRangeCoordinate;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })rowUIDsForRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })columnUIDsForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)rowIndexesForUIDs:(const void *)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })firstUidFromUIDSet:(id)a0 isRows:(BOOL)a1;
- (void)assertCollaborationConvergence;
- (const void *)columnUIDs;
- (const void *)rowUIDs;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })orderedRowUidsFromUids:(const void *)a0;
- (id)columnIndexesForUIDs:(const void *)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })orderedColumnUidsFromUids:(const void *)a0;
- (void)getUUIDBytes:(unsigned char[16])a0 forRowIndex:(unsigned int)a1;
- (void)getUUIDBytes:(unsigned char[16])a0 forColumnIndex:(unsigned short)a1;
- (unsigned int)rowIndexForUUIDBytes:(unsigned char[16])a0;
- (unsigned short)columnIndexForUUIDBytes:(unsigned char[16])a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })prunedColumnUIDsFromColumnUIDs:(const void *)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })prunedRowUIDsFromRowUIDs:(const void *)a0;
- (id)mutableIndexesForUIDSet:(id)a0 isRows:(BOOL)a1;
- (id)mutableIndexesForUIDSet:(id)a0 isRows:(BOOL)a1 notFoundUIDs:(id)a2;
- (id)rowUuids;
- (id)columnUuids;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rowRangeForUIDs:(const void *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })columnRangeForUIDs:(const void *)a0;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })cellRangeForUIDRange:(const void *)a0;
- (struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })cellUIDRangeForCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)initWithColumnRowUIDMap:(id)a0;

@end
