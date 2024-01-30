@class UIScrollView, NSString, _PXUIScrollView;
@protocol PXUIScrollViewControllerFocusItemProvider;

@interface PXUIScrollViewController : PXScrollViewController <PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider, UIScrollViewDelegate> {
    _PXUIScrollView *_scrollView;
    BOOL _isScrollViewDecelerating;
}

@property (nonatomic, setter=setScrollingToTop:) BOOL isScrollingToTop;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<PXUIScrollViewControllerFocusItemProvider> focusItemProvider;
@property (nonatomic) BOOL ignoresSafeAreaInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewTargetRect;
- (void)setClipsToBounds:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewVisibleRect;
- (BOOL)isDecelerating;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)isTracking;
- (void)setRespectsContentZOrder:(BOOL)a0;
- (struct CGSize { double x0; double x1; })scrollViewContentSize;
- (void)addFloatingSublayer:(id)a0 forAxis:(long long)a1;
- (void)applyScrollInfo:(id)a0;
- (void)addSubview:(id)a0;
- (BOOL)isDragging;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)focusItemsForScrollView:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)stopScrollingAndZoomingAnimations;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)deferContentOffsetUpdates;
- (void)_checkScrollViewDeceleration;
- (void)scrollViewWillLayoutSubviews:(id)a0;
- (BOOL)respectsContentZOrder;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)clipsToBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewActiveRect;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)scrollView:(id)a0 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewContentBounds;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (BOOL)isScrolledAtEdge:(unsigned int)a0 tolerance:(double)a1;
- (BOOL)showsVerticalScrollIndicator;
- (void)setVisibleOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setScrollViewNeedsLayout;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidingContentInsetEdges:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollViewLayoutIfNeeded;
- (void)scrollViewDidLayoutSubviews:(id)a0;
- (void)decelerationRateDidChange;
- (void)_scheduleScrollViewDecelerationCheck;
- (BOOL)hasWindow;
- (BOOL)showsHorizontalScrollIndicator;
- (void)setDeferContentOffsetUpdates:(BOOL)a0;
- (void)addGestureRecognizer:(id)a0;
- (id)contentCoordinateSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewVisibleRectOutsideBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewConstrainedVisibleRect;
- (struct CGSize { double x0; double x1; })scrollViewReferenceSize;
- (void)addSubviewToScrollView:(id)a0;

@end
