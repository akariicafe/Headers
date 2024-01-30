@class TSTCellUIDLookupListWrapper, NSObject;
@protocol OS_dispatch_queue;

@interface TSTCellUIDList : NSObject <NSCopying> {
    struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _rowIdList;
    struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _columnIdList;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _rowUIDIndexList;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _columnUIDIndexList;
    TSTCellUIDLookupListWrapper *_uncompressedCellUIDs;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long compressedSize;

+ (id)cellUIDList;
+ (id)cellUIDListFromRange:(const void *)a0;

- (void)compress;
- (id)iterator;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (void)enumerateCellUIDsUsingBlock:(id /* block */)a0;
- (void)reserve:(unsigned long long)a0;
- (const void *)columnUIDs;
- (const void *)rowUIDs;
- (id)uncompressedCellUIDs;
- (void)addCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)addCellUIDs:(void *)a0;
- (void)addCellRegion:(id)a0 withColumnUIDs:(const void *)a1 rowUIDs:(const void *)a2;
- (void)p_compressUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 index:(unsigned long long)a1 UIDtoIndexMap:(void *)a2 UIDs:(void *)a3 compressedIndexes:(void *)a4 lastSameUIDIndex:(void *)a5;
- (void)compressUIDIndexListFrom:(const void *)a0 withUIDCount:(unsigned long long)a1 to:(void *)a2;
- (id)pruneCellUIDListAgainstTable:(id)a0 behavior:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (const void *)compressedRowUIDs;
- (const void *)compressedColumnUIDs;
- (const void *)compressedRowIndexes;
- (const void *)compressedColumnIndexes;
- (void)setCompressedColumnIndexes:(const void *)a0;
- (unsigned long long)computeValidCount;
- (void)addCellUIDRanges:(const void *)a0;
- (id)pruneCellUIDListAgainstTable:(id)a0 behavior:(unsigned long long)a1;

@end
