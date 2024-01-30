@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer {
    BOOL _allowDragging;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } translation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } initialPoint;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)cancelDragging;
- (void)beginDragging;
- (void)_beginDraggingIfNecessary;
- (void)_stopDraggingIfNecessary:(BOOL)a0;

@end
