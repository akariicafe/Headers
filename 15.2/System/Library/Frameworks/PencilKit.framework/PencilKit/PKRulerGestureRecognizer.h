@class NSTimer;

@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer {
    NSTimer *_startTimer;
    BOOL _initialSnap;
}

@property (nonatomic) double startDelay;
@property (nonatomic) double startSnapThreshold;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)stopTimer;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })freeTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })unscaledFreeTransform;
- (void)resetAndAccumulateTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rulerTransform;

@end
