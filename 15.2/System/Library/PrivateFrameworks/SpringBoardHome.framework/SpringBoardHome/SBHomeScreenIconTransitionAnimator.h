@class SBIconAnimator, NSString, SBNestingViewController, SBHIconAnimationSettings;
@protocol SBHomeScreenIconTransitionAnimatorDelegate, SBViewControllerContextTransitioning;

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning> {
    id<SBViewControllerContextTransitioning> _transitionContext;
    unsigned long long _transitionToken;
    SBHIconAnimationSettings *_currentSettings;
    unsigned long long _currentOperation;
    BOOL _receivedFirstInteractiveUpdate;
    BOOL _needsTransitionTokenIncrementOnNextUpdate;
}

@property (readonly, nonatomic) SBHIconAnimationSettings *currentSettings;
@property (readonly, nonatomic) SBIconAnimator *iconAnimator;
@property (readonly, nonatomic) SBNestingViewController *childViewController;
@property (readonly, nonatomic) unsigned long long operation;
@property (nonatomic) double initialDelay;
@property (readonly, nonatomic) unsigned long long currentOperation;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=wasRestarted) BOOL restarted;
@property (weak, nonatomic) id<SBHomeScreenIconTransitionAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (double)transitionDuration:(id)a0;
- (double)percentComplete;
- (void)finishInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (id)transitionAnimationFactory:(id)a0;
- (BOOL)supportsRestarting;
- (void).cxx_destruct;
- (void)updateTransition:(id)a0 withPercentComplete:(double)a1;
- (void)reverse;
- (void)animationEnded:(BOOL)a0;
- (void)cancel;
- (void)restart;
- (BOOL)iconAnimator:(id)a0 canAlterViewHierarchyDuringCleanupUsingBlock:(id /* block */)a1;
- (id)initWithIconAnimator:(id)a0 childViewController:(id)a1 operation:(unsigned long long)a2;
- (void)iconAnimatorWasInvalidated:(id)a0;
- (void)completeImmediately;

@end
