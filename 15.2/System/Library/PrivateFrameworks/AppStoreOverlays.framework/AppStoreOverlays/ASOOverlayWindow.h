@interface ASOOverlayWindow : UIApplicationRotationFollowingWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canAffectStatusBarAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isInternalWindow;
- (id)initWithWindowScene:(id)a0;

@end
