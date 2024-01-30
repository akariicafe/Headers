@interface TSTMergeListWrapper : NSObject {
    struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *__value_; } __end_cap_; } _mergeList;
}

@property (readonly) unsigned long long count;
@property (readonly) BOOL isEmpty;

- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (void)addRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithMergeList:(const void *)a0;
- (id)mergeListWrapperWithRangesPassingTest:(id /* block */)a0;
- (id)regionForList;

@end
