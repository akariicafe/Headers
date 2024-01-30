@interface CFXAnimationHelper : NSObject

+ (void)animateLayer:(id)a0 forButtonHighlighted:(BOOL)a1 layoutStyle:(long long)a2;
+ (id)_animationWithKeyPath:(id)a0;
+ (void)configurePowerSensitiveAnimation:(id)a0;
+ (void)animateLayer:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromCurrentState:(BOOL)a2;
+ (double)_highlightScaleForLayoutStyle:(long long)a0;

@end
