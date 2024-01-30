@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (readonly, nonatomic) SBHomeScreenViewController *homeScreenViewController;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)sb_autorotates;

- (BOOL)isContentHidden;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_canBecomeKeyWindow;
- (id)initWithScreen:(id)a0 scene:(id)a1 rootViewController:(id)a2 layoutStrategy:(id)a3 role:(id)a4 debugName:(id)a5;
- (id)autorotationPreventionReasons;

@end
