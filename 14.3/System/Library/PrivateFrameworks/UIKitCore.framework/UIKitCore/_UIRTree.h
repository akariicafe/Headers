@class NSIndexSet, NSMutableIndexSet;

@interface _UIRTree : NSObject {
    struct shared_ptr<_UIRTreeContainerNode> { struct _UIRTreeContainerNode *__ptr_; struct __shared_weak_count *__cntrl_; } _root;
    struct _NSRange { unsigned long long location; unsigned long long length; } _allIndexesRange;
    NSMutableIndexSet *_allIndexes;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingFrame;
@property (readonly, nonatomic) NSIndexSet *allIndexes;

- (id)visualDescription;
- (id)init;
- (void).cxx_destruct;
- (void)insertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndex:(long long)a1;
- (id)description;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndex:(long long)a0;
- (void)enumerateFramesWithBlock:(id /* block */)a0;
- (id)indexesForFramesIntersectingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
