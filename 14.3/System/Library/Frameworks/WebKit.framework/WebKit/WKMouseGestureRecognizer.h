@interface WKMouseGestureRecognizer : UIHoverGestureRecognizer {
    struct RetainPtr<UIEvent> { void *m_ptr; } _currentHoverEvent;
    struct RetainPtr<UITouch> { void *m_ptr; } _currentTouch;
    BOOL _touching;
    struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent *__value_; } __ptr_; } _lastEvent;
    struct Optional<CGPoint> { BOOL init_; union constexpr_storage_t<CGPoint> { unsigned char dummy_; struct CGPoint { double x; double y; } value_; } storage_; } _lastLocation;
    struct Optional<long> { BOOL init_; union constexpr_storage_t<long> { unsigned char dummy_; long long value_; } storage_; } _pressedButtonMask;
}

- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceivePress:(id)a0;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (id)mouseTouch;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent *x0; } x0; })createMouseEventWithType:(int)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id).cxx_construct;
- (struct Optional<CGPoint> { BOOL x0; union constexpr_storage_t<CGPoint> { unsigned char x0; struct CGPoint { double x0; double x1; } x1; } x1; })lastMouseLocation;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (struct NativeWebMouseEvent { unsigned int x0; struct OptionSet<WebKit::WebEvent::Modifier> { unsigned char x0; } x1; struct WallTime { double x0; } x2; unsigned int x3; unsigned short x4; struct IntPoint { int x0; int x1; } x5; struct IntPoint { int x0; int x1; } x6; float x7; float x8; float x9; int x10; double x11; unsigned int x12; struct RetainPtr<WebEvent> { void *x0; } x13; } *)lastMouseEvent;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
