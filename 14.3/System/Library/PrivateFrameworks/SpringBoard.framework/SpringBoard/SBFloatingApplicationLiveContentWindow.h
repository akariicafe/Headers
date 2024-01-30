@class UIViewController, UIView;

@interface SBFloatingApplicationLiveContentWindow : SBWindow

@property (weak, nonatomic) UIViewController *deviceApplicationSceneViewController;
@property (weak, nonatomic) UIView *effectiveCoordinateSpace;

+ (BOOL)sb_autorotates;

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
- (BOOL)_usesWindowServerHitTesting;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
- (BOOL)_canBecomeKeyWindow;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toView:(id)a1;
- (void).cxx_destruct;
- (void)setRootViewController:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (id)initWithDebugName:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
