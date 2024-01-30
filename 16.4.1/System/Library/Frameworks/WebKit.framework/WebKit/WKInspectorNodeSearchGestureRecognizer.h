@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer {
    struct RetainPtr<UITouch> { void *m_ptr; } _touch;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id).cxx_construct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_processTouches:(id)a0 state:(long long)a1;

@end
