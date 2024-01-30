@interface PDFPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } locationOfFirstTouch;
@property (nonatomic) BOOL didForcePress;
@property (nonatomic) BOOL touchesDidHavePressure;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationOfFirstTouchInView:(id)a0;

@end
