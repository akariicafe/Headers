@interface TSTMergeListWrapper : NSObject {
    struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect *__value_; } __end_cap_; } _mergeList;
}

@property (readonly) unsigned long long count;
@property (readonly) BOOL isEmpty;

- (void).cxx_destruct;
- (void)addRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (id).cxx_construct;
- (id)initWithMergeList:(const struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect *x0; struct TSUCellRect *x1; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect *x0; } x2; } *)a0;
- (id)mergeListWrapperWithRangesPassingTest:(id /* block */)a0;
- (id)regionForList;

@end
