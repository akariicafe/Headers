@interface _UIWindowRotationAnimationController : _UIWindowAnimationController

@property (copy, nonatomic) id /* block */ animations;
@property (nonatomic) double duration;
@property (nonatomic) BOOL skipCallbacks;
@property (nonatomic) BOOL updateStatusBarIfNecessary;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)dealloc;

@end
