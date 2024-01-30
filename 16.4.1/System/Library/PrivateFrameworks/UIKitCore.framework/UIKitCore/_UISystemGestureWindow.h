@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {
    UISystemGestureView *_systemGestureView;
}

+ (BOOL)_isSecure;

- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_extendsScreenSceneLifetime;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)initWithDisplay:(id)a0;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)_appearsInLoupe;
- (BOOL)_isSystemGestureWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_focusResponder;
- (BOOL)canBecomeKeyWindow;
- (id)_systemGestureView;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;

@end
