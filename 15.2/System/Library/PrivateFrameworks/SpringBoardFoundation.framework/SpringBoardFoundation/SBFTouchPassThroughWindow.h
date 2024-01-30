@interface SBFTouchPassThroughWindow : UIWindow

+ (Class)touchPassThroughRootViewControllerClass;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (id)initWithScreen:(id)a0 role:(id)a1 debugName:(id)a2;

@end
