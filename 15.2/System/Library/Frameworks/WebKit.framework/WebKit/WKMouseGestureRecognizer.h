@interface WKMouseGestureRecognizer : UIHoverGestureRecognizer {
    struct RetainPtr<UIEvent> { void *m_ptr; } _currentHoverEvent;
    struct RetainPtr<UITouch> { void *m_ptr; } _currentTouch;
    BOOL _touching;
    struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>> { struct NativeWebMouseEvent *__value_; } __ptr_; } _lastEvent;
    struct optional<CGPoint> { union { char __null_state_; struct CGPoint { double x; double y; } __val_; } ; BOOL __engaged_; } _lastLocation;
    struct optional<long> { union { char __null_state_; long long __val_; } ; BOOL __engaged_; } _pressedButtonMask;
}

- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (void)setEnabled:(BOOL)a0;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>> { struct NativeWebMouseEvent *x0; } x0; })createMouseEventWithType:(int)a0 wasCancelled:(BOOL)a1;
- (id)mouseTouch;
- (void).cxx_destruct;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (void *)lastMouseEvent;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id).cxx_construct;
- (struct optional<CGPoint> { union { char x0; struct CGPoint { double x0; double x1; } x1; } x0; BOOL x1; })lastMouseLocation;

@end
