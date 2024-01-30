@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer {
    struct RetainPtr<UITouch> { void *m_ptr; } _touch;
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_processTouches:(id)a0 state:(long long)a1;
- (id).cxx_construct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
