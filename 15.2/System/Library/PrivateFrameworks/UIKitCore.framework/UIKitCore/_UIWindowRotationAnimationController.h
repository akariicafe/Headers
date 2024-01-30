@interface _UIWindowRotationAnimationController : _UIWindowAnimationController

@property (copy, nonatomic) id /* block */ animations;
@property (nonatomic) double duration;
@property (nonatomic) BOOL skipCallbacks;
@property (nonatomic) BOOL updateStatusBarIfNecessary;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
