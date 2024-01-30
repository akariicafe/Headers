@class TNPageCoordinateDictionary, TSDDrawableInfo, TNPageController;

@interface TNHintCache : NSObject {
    struct { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } bottomRight; } mPageRange;
    BOOL mIsMaxColumnValid;
    BOOL mIsMaxRowValid;
    TNPageCoordinateDictionary *mHintCacheEntryDictionary;
    struct set<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct __tree<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUCellCoord, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::less<TSUCellCoord> > { unsigned long long __value_; } __pair3_; } __tree_; } _pageCoordinatesWithAnnotations;
}

@property (retain) TSDDrawableInfo *info;
@property (nonatomic) BOOL pageCoordinatesWithAnnotationsIsValid;
@property (readonly) TNPageController *pageController;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)invalidate;
- (id)p_hintCacheEntryAtCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)_infoPartitioner;
- (struct { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })pageRangeWithUpperBound:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)initWithInfo:(id)a0 pageController:(id)a1;
- (id)layoutAtCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 parentLayout:(id)a1;
- (struct set<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct __tree<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUCellCoord, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<TSUCellCoord> > { unsigned long long x0; } x2; } x0; })pageCoordinatesWithAnnotations;

@end
