@interface SBFloatingDockWindow : SBWindow

+ (BOOL)sb_autorotates;
+ (id)_traitsArbiterOrientationActuationRole;

- (BOOL)isContentHidden;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
- (BOOL)_canBecomeKeyWindow;
- (id)floatingDockRootViewController;

@end
