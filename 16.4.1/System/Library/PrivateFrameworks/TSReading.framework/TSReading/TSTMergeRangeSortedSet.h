@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TSTMergeRangeSortedSet : NSObject {
    void *mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__tree_node<TSTMergeRangeElem, void *> *, long> { void *__ptr_; } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })begin;
- (id).cxx_construct;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (void)reset;
- (struct CGSize { double x0; double x1; })getSize;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })iter;
- (void)addRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0 andSize:(struct CGSize { double x0; double x1; })a1 andPaddingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 andIsCheckbox:(BOOL)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getPaddingInsets;
- (BOOL)isCheckbox;

@end
