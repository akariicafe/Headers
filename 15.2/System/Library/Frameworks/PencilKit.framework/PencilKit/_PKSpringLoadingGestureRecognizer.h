@class UITouch;

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer

@property (nonatomic) BOOL hasRecognized;
@property (retain, nonatomic) UITouch *gestureTouch;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) double stationaryFingerTimeout;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)_stationaryFingerTimerFired;
- (BOOL)_pointInsideRecognitionPossibleArea:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_pointShouldBeRecognized:(struct CGPoint { double x0; double x1; })a0;

@end
