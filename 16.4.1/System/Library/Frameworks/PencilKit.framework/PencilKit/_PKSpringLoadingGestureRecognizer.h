@class UITouch;

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer

@property (nonatomic) BOOL hasRecognized;
@property (retain, nonatomic) UITouch *gestureTouch;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) double stationaryFingerTimeout;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_pointInsideRecognitionPossibleArea:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_pointShouldBeRecognized:(struct CGPoint { double x0; double x1; })a0;
- (void)_stationaryFingerTimerFired;

@end
