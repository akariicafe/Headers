@class NSString;

@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating> {
    struct set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::allocator<TSUColumnRowRect>> { struct __tree<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::allocator<TSUColumnRowRect>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUColumnRowRect, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> { unsigned long long __value_; } __pair3_; } __tree_; } mCellRangeSet;
    struct { unsigned short row; unsigned char column; unsigned char reserved; } mCellID;
    struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } mBoundingCellRange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (struct { unsigned short x0; unsigned char x1; unsigned char x2; })getNext;
- (id)initWithCellRegion:(id)a0;

@end
