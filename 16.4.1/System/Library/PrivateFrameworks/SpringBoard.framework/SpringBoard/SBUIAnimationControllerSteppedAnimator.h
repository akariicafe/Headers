@class SBAnimationStepper, NSString;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>

@property (readonly, nonatomic) SBAnimationStepper *stepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishInteractiveTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (double)percentComplete;
- (void)updateTransition:(id)a0 withPercentComplete:(double)a1;
- (id)initWithAnimationController:(id)a0 stepper:(id)a1;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (id)initWithAnimationController:(id)a0;
- (void).cxx_destruct;

@end
