@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (readonly, nonatomic) SBHomeScreenViewController *homeScreenViewController;

+ (BOOL)sb_autorotates;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (BOOL)isContentHidden;
- (id)initWithWindowScene:(id)a0 rootViewController:(id)a1 layoutStrategy:(id)a2 role:(id)a3 debugName:(id)a4;
- (id)autorotationPreventionReasons;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
- (BOOL)_canBecomeKeyWindow;

@end
