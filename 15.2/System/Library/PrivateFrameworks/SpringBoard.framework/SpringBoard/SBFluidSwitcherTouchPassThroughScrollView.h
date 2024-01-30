@interface SBFluidSwitcherTouchPassThroughScrollView : UIScrollView

@property (nonatomic) double velocityScaleFactor;

+ (BOOL)superclassRespondsToVelocityScaleFactor;
+ (BOOL)superclassRespondsToSetVelocityScaleFactor;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
