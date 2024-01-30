@interface TSTCellUIDRegion : TSKSosBase {
    struct vector<TSKUIDStructTract, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *__begin_; struct TSKUIDStructTract *__end_; struct __compressed_pair<TSKUIDStructTract *, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *__value_; } __end_cap_; } _cellUIDRangeList;
}

@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)cellUIDRegionFromRegion:(id)a0 inTable:(id)a1;
+ (id)cellUIDRegionFromRegion:(id)a0 inTableModel:(id)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0;
- (id)initFromMessage:(const void *)a0;
- (id)cellRegionFromTable:(id)a0;
- (void)enumerateCellUIDRangesUsingBlock:(id /* block */)a0;
- (void)enumerateCellUIDUsingBlock:(id /* block */)a0;
- (void)enumerateColumnUIDUsingBlock:(id /* block */)a0;
- (void)enumerateRowUIDUsingBlock:(id /* block */)a0;
- (id)initWithCellUIDRange:(void *)a0;
- (id)initWithCellUIDRangeVector:(const void *)a0;
- (id)pruneAgainstTable:(id)a0;
- (struct vector<TSKUIDStructTract, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *x0; struct TSKUIDStructTract *x1; struct __compressed_pair<TSKUIDStructTract *, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *x0; } x2; })rowBasedSubRangesOfCellCount:(unsigned long long)a0;

@end
