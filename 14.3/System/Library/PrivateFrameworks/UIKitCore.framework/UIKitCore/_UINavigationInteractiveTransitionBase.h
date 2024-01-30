@class _UINavigationParallaxTransition, UIGestureRecognizer, NSString, CADisplayLink, UIView, UIPanGestureRecognizer, UIViewController;
@protocol _UINavigationInteractiveTransitionBaseDelegate;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {
    UIView *_gestureRecognizerView;
    CADisplayLink *_displayLink;
    double _timestamps[3];
    double _velocities[3];
    double _accelerations[3];
}

@property (nonatomic) BOOL springAnimationIsPending;
@property (nonatomic) BOOL inSpringAnimation;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) double totalDistance;
@property (nonatomic) double skipTimeStamp;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) double previousDisplacement;
@property (nonatomic) double previousVelocity;
@property (nonatomic) double previousAcceleration;
@property (nonatomic) double averageVelocity;
@property (nonatomic) double averageAcceleration;
@property (weak, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic) BOOL shouldReverseTranslation;
@property (retain, nonatomic) _UINavigationParallaxTransition *animationController;
@property (nonatomic, setter=_setInteractionState:) long long _interactionState;
@property (nonatomic, setter=_setTransitionWasStopped:) BOOL _transitionWasStopped;
@property (nonatomic, setter=_setStoppedTransitionWasCancelled:) BOOL _stoppedTransitionWasCancelled;
@property (weak, nonatomic, setter=_setParent:) UIViewController *_parent;
@property (nonatomic, setter=_setUseAugmentedShouldPopDecisionProcedure:) BOOL _useAugmentedShouldPopDecisionProcedure;
@property (nonatomic, setter=_setCompletesTransitionOnEnd:) BOOL _completesTransitionOnEnd;
@property (readonly, nonatomic, getter=_navigationGesture) UIGestureRecognizer *navigationGesture;
@property (weak, nonatomic) id<_UINavigationInteractiveTransitionBaseDelegate> delegate;
@property (nonatomic, setter=_setShouldReverseLayoutDirection:) BOOL _shouldReverseLayoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)popGesture:(id)a0 withRemainingDuration:(double)a1 shouldPopWithVelocity:(double *)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)startInteractiveTransition:(id)a0;
- (void)handleNavigationTransition:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishInteractiveTransition;
- (id)initWithGestureRecognizerView:(id)a0 animator:(id)a1 delegate:(id)a2;
- (void)_updateStatistics:(id)a0 firstSample:(BOOL)a1 finalSample:(BOOL)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)gestureRecognizerView;
- (void)setNotInteractiveTransition;
- (void)_completeStoppedInteractiveTransition;
- (BOOL)_gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (double)_translationCoefficient;
- (void)_resetInteractionController;
- (void)_stopInteractiveTransition;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)cancelInteractiveTransition;
- (void)startInteractiveTransition;

@end
