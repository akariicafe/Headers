@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TSTMergeRangeSortedSet : NSObject {
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> > { struct __tree<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTMergeRangeElem, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, TSTMergeRangeElemCompare> { unsigned long long x0; } x2; } x0; } *mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, long> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__ptr_; } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })begin;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })iter;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)count;
- (struct CGSize { double x0; double x1; })getSize;
- (void)addRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 andSize:(struct CGSize { double x0; double x1; })a1 andPaddingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 andIsCheckbox:(BOOL)a3;
- (BOOL)isCheckbox;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getPaddingInsets;

@end
