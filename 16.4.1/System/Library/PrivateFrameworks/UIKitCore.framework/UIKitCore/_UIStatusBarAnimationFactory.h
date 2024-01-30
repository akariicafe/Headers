@interface _UIStatusBarAnimationFactory : NSObject

+ (id)fadeAnimationWithDuration:(double)a0;
+ (id)fadeAnimationWithDuration:(double)a0 scale:(double)a1;
+ (id)fadeAnimationWithDuration:(double)a0 scale:(double)a1 offset:(struct UIOffset { double x0; double x1; })a2;
+ (id)noAnimation;
+ (id)pulseAnimationWithDuration:(double)a0 scale:(double)a1;

@end
