@class NSTimer;

@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer {
    NSTimer *_startTimer;
    BOOL _initialSnap;
}

@property (nonatomic) double startDelay;
@property (nonatomic) double startSnapThreshold;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)stopTimer;
- (void)start;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })freeTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })unscaledFreeTransform;
- (void)resetAndAccumulateTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rulerTransform;

@end
