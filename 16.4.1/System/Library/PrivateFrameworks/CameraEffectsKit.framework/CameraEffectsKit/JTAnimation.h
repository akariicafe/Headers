@interface JTAnimation : NSObject

+ (void)performAnimation:(id /* block */)a0 curve:(long long)a1 duration:(double)a2 completion:(id /* block */)a3 delay:(double)a4 userInteractionEnabled:(BOOL)a5;
+ (void)performAnimation:(id /* block */)a0 duration:(double)a1 completion:(id /* block */)a2;
+ (void)performAnimation:(id /* block */)a0 timingParameters:(id)a1 duration:(double)a2 completion:(id /* block */)a3 delay:(double)a4;
+ (void)performAnimation:(id /* block */)a0 timingParameters:(id)a1 duration:(double)a2 completion:(id /* block */)a3 delay:(double)a4 userInteractionEnabled:(BOOL)a5;
+ (void)performWithAnimator:(id)a0 animation:(id /* block */)a1 duration:(double)a2 completion:(id /* block */)a3 delay:(double)a4 userInteractionEnabled:(BOOL)a5;

@end
