@class NSMutableSet, NSString, NSHashTable, UIView, UIPanGestureRecognizer, SBSearchScrollView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate, BSDescriptionProviding> {
    NSHashTable *_observers;
    SBSearchScrollView *_scrollView;
    BOOL _suppressObserverCallbacks;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastOffset;
    NSMutableSet *_disabledReasons;
    BOOL _isDismissing;
    BOOL _ignoreScrollingEnded;
    BOOL _isDraggingAccordingToScrollView;
}

@property (class, readonly, nonatomic) double searchHeaderHeight;

@property (retain, nonatomic) UIView *targetView;
@property (readonly, nonatomic, getter=isAnimatingResetOrReveal) BOOL animatingResetOrReveal;
@property (readonly, nonatomic, getter=isShowingSearch) BOOL showingSearch;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)removeObserver:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)addObserver:(id)a0;
- (void)_updateForScrollingEnded;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)resetAnimated:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)revealAnimated:(BOOL)a0;
- (void)requireGestureRecognizerToFail:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_notifyThaWeStartedShowingOrHiding;
- (BOOL)_isShowingSearch;
- (void)_notifyThatGestureEndedWithShowingIfNeeded:(BOOL)a0;
- (void)_updateForFinalContentOffset;
- (void)_updateScrollingEnabled;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setDisabled:(BOOL)a0 forReason:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)updateForRotation;

@end
