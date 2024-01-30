@class UIScrollView, NSString, _PXUIScrollView;
@protocol PXUIScrollViewControllerFocusItemProvider;

@interface PXUIScrollViewController : PXScrollViewController <PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider, UIScrollViewDelegate> {
    _PXUIScrollView *_scrollView;
}

@property (nonatomic, setter=setScrollingToTop:) BOOL isScrollingToTop;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<PXUIScrollViewControllerFocusItemProvider> focusItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGestureRecognizer:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)setScrollViewNeedsLayout;
- (void).cxx_destruct;
- (id)contentCoordinateSpace;
- (void)scrollViewLayoutIfNeeded;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidingContentInsetEdges:(unsigned long long)a1 animated:(BOOL)a2;
- (void)stopScrollingAndZoomingAnimations;
- (BOOL)isDragging;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })scrollViewContentSize;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)scrollViewDidScrollToTop:(id)a0;
- (BOOL)hasWindow;
- (void)setRespectsContentZOrder:(BOOL)a0;
- (BOOL)isScrolledAtEdge:(unsigned int)a0 tolerance:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewActiveRect;
- (void)scrollView:(id)a0 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidLayoutSubviews:(id)a0;
- (BOOL)isTracking;
- (id)focusItemsForScrollView:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isDecelerating;
- (BOOL)respectsContentZOrder;
- (void)setVisibleOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewContentBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewVisibleRect;
- (void)addFloatingSublayer:(id)a0 forAxis:(long long)a1;
- (BOOL)deferContentOffsetUpdates;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewConstrainedVisibleRect;
- (void)applyScrollInfo:(id)a0;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewTargetRect;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)addSubview:(id)a0;
- (void)addSubviewToScrollView:(id)a0;
- (void)setDeferContentOffsetUpdates:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillLayoutSubviews:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })scrollViewReferenceSize;

@end
