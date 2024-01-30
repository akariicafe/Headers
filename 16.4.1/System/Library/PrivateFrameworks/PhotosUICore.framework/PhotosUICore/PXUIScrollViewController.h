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

- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (BOOL)showsVerticalScrollIndicator;
- (BOOL)isScrolledAtEdge:(unsigned int)a0 tolerance:(double)a1;
- (BOOL)isDecelerating;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)clipsToBounds;
- (BOOL)hasWindow;
- (BOOL)isTracking;
- (BOOL)respectsContentZOrder;
- (void)setClipsToBounds:(BOOL)a0;
- (void)stopScrollingAndZoomingAnimations;
- (void)removeGestureRecognizer:(id)a0;
- (void)contentInsetAdjustmentBehaviorDidChange;
- (void)scrollViewDidLayoutSubviews:(id)a0;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidingContentInsetEdges:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewWillLayoutSubviews:(id)a0;
- (BOOL)isDragging;
- (void)decelerationRateDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewVisibleRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewConstrainedVisibleRect;
- (void)addSubview:(id)a0;
- (void)setDeferContentOffsetUpdates:(BOOL)a0;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })scrollViewReferenceSize;
- (void)_scheduleScrollViewDecelerationCheck;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addGestureRecognizer:(id)a0;
- (void)applyScrollInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewActiveRect;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1;
- (void)addSubviewToScrollView:(id)a0;
- (void)setScrollViewNeedsLayout;
- (BOOL)deferContentOffsetUpdates;
- (id)contentCoordinateSpace;
- (void)setRespectsContentZOrder:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollView:(id)a0 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewTargetRect;
- (void)scrollViewDidBeginFocusFastScrolling:(id)a0;
- (void)setVisibleOrigin:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)showsHorizontalScrollIndicator;
- (void)addFloatingSublayer:(id)a0 forAxis:(long long)a1;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_checkScrollViewDeceleration;
- (void)scrollViewLayoutIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewVisibleRectOutsideBounds;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)scrollViewDidEndFocusFastScrolling:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollViewContentBounds;
- (struct CGSize { double x0; double x1; })scrollViewContentSize;
- (id)focusItemsForScrollView:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
