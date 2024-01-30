@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {
    UISystemGestureView *_systemGestureView;
}

+ (BOOL)_isSecure;

- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)_canBecomeKeyWindow;
- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_appearsInLoupe;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)_focusResponder;
- (id)initWithScreen:(id)a0;
- (id)_systemGestureView;

@end
