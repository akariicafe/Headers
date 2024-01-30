@class UITouch, NSTimer;

@interface CCUIFlickGestureRecognizer : UIGestureRecognizer {
    UITouch *_touch;
    NSTimer *_timeoutTimer;
    double _initialTouchTimestamp;
    struct CGPoint { double x; double y; } _initialTouchLocation;
    BOOL _latched;
}

@property (nonatomic) double maximumFlickTime;
@property (nonatomic) double minimumFlickVelocity;
@property (nonatomic) unsigned long long allowedFlickDirections;

- (void)_evaluateFlickAtTimeout;
- (void)_beginFlickWithTouch:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_validateFlickWithTouch:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
