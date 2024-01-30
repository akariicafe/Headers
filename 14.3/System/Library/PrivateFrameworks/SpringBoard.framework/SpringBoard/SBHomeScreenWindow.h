@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (readonly, nonatomic) SBHomeScreenViewController *homeScreenViewController;

+ (BOOL)sb_autorotates;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (BOOL)_canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_initWithScreen:(id)a0 layoutStrategy:(id)a1 debugName:(id)a2 rootViewController:(id)a3 scene:(id)a4;

@end
