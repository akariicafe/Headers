@interface _UIHostedWindowAnimationController : _UIWindowAnimationController

@property (copy, nonatomic) id /* block */ transitionActions;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;

@end
