@class PXTilingScrollInfo, NSString, NSHashTable, NSObject;
@protocol PXAnonymousScrollView, PXTilingScrollControllerUpdateDelegate, UICoordinateSpace;

@interface PXScrollViewController : NSObject <PXTilingScrollController> {
    NSHashTable *_willLayoutSubviewsObservers;
    NSHashTable *_didLayoutSubviewsObservers;
    NSHashTable *_didScrollObservers;
}

@property (readonly, nonatomic) NSHashTable *_observers;
@property (readonly, nonatomic) long long activeScrollAnimations;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } scrollViewReferenceSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollViewActiveRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollViewVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollViewConstrainedVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollViewTargetRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } scrollViewContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollViewContentBounds;
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView;
@property (readonly, nonatomic) BOOL isAnimatingScroll;
@property (readonly, nonatomic) BOOL isDecelerating;
@property (readonly, nonatomic) BOOL isDragging;
@property (readonly, nonatomic) BOOL isTracking;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) BOOL isManuallyChanging;
@property (readonly, nonatomic) BOOL hasWindow;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *contentCoordinateSpace;
@property (nonatomic) struct CGPoint { double x0; double x1; } visibleOrigin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) BOOL deferContentOffsetUpdates;
@property (weak, nonatomic) id<PXTilingScrollControllerUpdateDelegate> updateDelegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } referenceSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } constrainedVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (copy, nonatomic) PXTilingScrollInfo *scrollInfo;
@property (nonatomic) BOOL respectsContentZOrder;
@property (nonatomic) struct CGSize { double width; double height; } presentedContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (id)init;
- (void)setNeedsUpdate;
- (void)setScrollViewNeedsLayout;
- (void).cxx_destruct;
- (void)scrollViewLayoutIfNeeded;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidingContentInsetEdges:(unsigned long long)a1 animated:(BOOL)a2;
- (void)stopScrollingAndZoomingAnimations;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)isScrolledAtEdge:(unsigned int)a0 tolerance:(double)a1;
- (void)updateIfNeeded;
- (void)unregisterObserver:(id)a0;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)addFloatingSublayer:(id)a0 forAxis:(long long)a1;
- (void)applyScrollInfo:(id)a0;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (void)addSubviewToScrollView:(id)a0;
- (void)setActiveScrollAnimations:(long long)a0;
- (void)scrollViewWillLayout;
- (void)scrollViewDidLayout;
- (void)scrollViewDidScroll;
- (void)scrollViewWillBeginScrolling;
- (void)willEndScrollingWithVelocity:(struct CGPoint { double x0; double x1; })a0 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (void)scrollViewDidEndScrolling;
- (void)scrollViewContentBoundsDidChange;
- (BOOL)scrollViewShouldScrollToTop;
- (void)scrollViewDidEndScrollingAnimation;
- (void)performManualChange:(id /* block */)a0;
- (void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(unsigned long long)a0;

@end
