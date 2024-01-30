@interface SBControlCenterWindow : SBIgnoredForAutorotationSecureWindow

+ (id)_traitsArbiterOrientationActuationRole;

- (id)window;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_canBecomeKeyWindow;

@end
