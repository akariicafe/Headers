@interface _UIHostedWindowAnimationController : _UIWindowAnimationController

@property (copy, nonatomic) id /* block */ transitionActions;
@property (nonatomic) double duration;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
