@interface TSTMergeRegionMap : TSPObject

@property (readonly, nonatomic) struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect *__value_; } __end_cap_; } mergedRects;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
