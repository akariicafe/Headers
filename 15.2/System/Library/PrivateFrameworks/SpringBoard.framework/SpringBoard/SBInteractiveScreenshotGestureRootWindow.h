@interface SBInteractiveScreenshotGestureRootWindow : _UIRootWindow

+ (BOOL)_isSecure;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_appearsInLoupe;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)_usesWindowServerHitTesting;

@end
