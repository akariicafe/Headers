@interface SBControlCenterWindow : SBIgnoredForAutorotationSecureWindow

+ (id)_traitsArbiterOrientationActuationRole;

- (id)window;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_canBecomeKeyWindow;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;

@end
