@class PXGLayout, PXGAnimator;

@interface PXGAnimatorLayout : NSObject

@property (readonly, weak, nonatomic) PXGAnimator *animator;
@property (retain, nonatomic) PXGLayout *inputLayout;

- (struct CGSize { double x0; double x1; })contentSize;
- (struct CGSize { double x0; double x1; })referenceSize;
- (void)removeAllFences;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)a0;
- (BOOL)isSpriteIndex:(unsigned int)a0 decoratingSpriteWithIndex:(out unsigned int *)a1;
- (unsigned int)numberOfSprites;
- (id)rootLayout;
- (id)initWithAnimator:(id)a0;
- (id)fences;

@end
