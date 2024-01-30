@class UIPanGestureRecognizer, PXSwipeDownTracker, UIView;
@protocol UIViewControllerContextTransitioning;

@interface PXUIViewControllerSwipeDownTransition : PXUIViewControllerZoomTransition {
    BOOL _didAnimate;
    BOOL _shouldHandleGestureEnd;
    BOOL _didHandleGestureEnd;
}

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) UIView *swipedView;
@property (nonatomic) struct CGPoint { double x; double y; } swipeViewInitialCenter;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) PXSwipeDownTracker *swipeDownTracker;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)a0 detailViewController:(id)a1;

- (BOOL)isInteractive;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (void)panGestureRecognizerDidChange;
- (void)_handleGestureEndIfNeeded;
- (void)_updateDimmingViewOrder;

@end
