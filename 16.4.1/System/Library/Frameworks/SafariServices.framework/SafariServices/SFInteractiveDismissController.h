@class NSString, UIScreenEdgePanGestureRecognizer, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning, SFInteractiveDismissControllerDelegate;

@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    id<UIViewControllerContextTransitioning> _transitionContext;
    unsigned long long _dismissMode;
    long long _interactionState;
    double _timestamps[3];
    double _velocities[3];
    double _accelerations[3];
    UIView *_dimmingView;
}

@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) double totalDistance;
@property (nonatomic) double skipTimeStamp;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) double previousDisplacement;
@property (nonatomic) double previousVelocity;
@property (nonatomic) double previousAcceleration;
@property (nonatomic) double averageVelocity;
@property (nonatomic) double averageAcceleration;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer;
@property (weak, nonatomic) UIViewController *viewControllerToBeDismissed;
@property (retain, nonatomic) UIView *edgeSwipeView;
@property (weak, nonatomic) id<SFInteractiveDismissControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)animateTransition:(id)a0;
- (void)cancelInteractiveTransition;
- (BOOL)popGesture:(id)a0 withRemainingDuration:(double)a1 shouldPopWithVelocity:(double *)a2;
- (void)finishInteractiveTransition;
- (void)_updateStatistics:(id)a0 firstSample:(BOOL)a1 finalSample:(BOOL)a2;
- (double)_translationCoefficient;
- (id)init;
- (void).cxx_destruct;
- (void)swiped:(id)a0;
- (void)_animateDismissalCancelTransition;
- (void)_animateDismissalCompleteTransition;
- (void)_dismissAnimateTransition:(id)a0;
- (double)_percentComplete:(id)a0;
- (void)_presentAnimateTransition:(id)a0;
- (struct CGPoint { double x0; double x1; })translationForStatistics;
- (struct CGPoint { double x0; double x1; })velocityForStatistics;

@end
