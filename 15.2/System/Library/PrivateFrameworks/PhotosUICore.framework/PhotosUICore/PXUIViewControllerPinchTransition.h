@class UIPinchGestureRecognizer, UIView, PXPinchTracker, PXRegionOfInterest;
@protocol UIViewControllerContextTransitioning;

@interface PXUIViewControllerPinchTransition : PXUIViewControllerTransition

@property (nonatomic, setter=_setState:) long long _state;
@property (retain, nonatomic, setter=_setTransitionContext:) id<UIViewControllerContextTransitioning> _transitionContext;
@property (retain, nonatomic, setter=_setFromView:) UIView *_fromView;
@property (retain, nonatomic, setter=_setToView:) UIView *_toView;
@property (retain, nonatomic, setter=_setFromSnapshotView:) UIView *_fromSnapshotView;
@property (retain, nonatomic, setter=_setToSnapshotView:) UIView *_toSnapshotView;
@property (retain, nonatomic, setter=_setDimmingView:) UIView *_dimmingView;
@property (retain, nonatomic, setter=_setRegionOfInterest:) PXRegionOfInterest *_regionOfInterest;
@property (retain, nonatomic, setter=_setPinchTracker:) PXPinchTracker *_pinchTracker;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)a0 detailViewController:(id)a1;

- (void)startInteractiveTransition:(id)a0;
- (void)animateTransition:(id)a0;
- (BOOL)isInteractive;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (void)_update;
- (void)pinchGestureRecognizerDidChange;

@end
