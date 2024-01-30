@interface SiriSharedUIAnimationUtilities : NSObject

+ (double)defaultAnimationDuration;
+ (id)defaultTimingFunction;
+ (id)_centeringAnimationForInitialScale:(double)a0 width:(double)a1;
+ (double)animationBeginTimeForStyle:(long long)a0;
+ (double)animationCoefficient;
+ (double)animationDurationForStyle:(long long)a0;
+ (id)animationForStyle:(long long)a0 expectedWidthForStyle:(id)a1;
+ (void)perfomAnimationBlockWithAnimationBlock:(id /* block */)a0 context:(id)a1 completion:(id /* block */)a2;

@end
