@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {
    UISystemGestureView *_systemGestureView;
}

+ (BOOL)_isSecure;

- (id)initWithDisplayConfiguration:(id)a0;
- (id)_focusResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)_systemGestureView;
- (id)initWithDisplay:(id)a0;
- (BOOL)_appearsInLoupe;
- (BOOL)canBecomeKeyWindow;
- (void).cxx_destruct;
- (id)initWithScreen:(id)a0;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_isSystemGestureWindow;

@end
