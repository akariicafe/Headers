@class SBAnimationStepper, NSString;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>

@property (readonly, nonatomic) SBAnimationStepper *stepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTransition:(id)a0 withPercentComplete:(double)a1;
- (void)finishInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void).cxx_destruct;
- (id)initWithAnimationController:(id)a0 stepper:(id)a1;
- (id)initWithAnimationController:(id)a0;
- (double)percentComplete;

@end
