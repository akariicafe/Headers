@interface ISTouchingGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;
@property (nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID;
@property (nonatomic, setter=_setInitialPointInView:) struct CGPoint { double x; double y; } _initialPointInView;
@property (nonatomic) double minimumTouchDuration;
@property (nonatomic) double extraMinimumTouchDuration;
@property (nonatomic) BOOL requireSingleTouch;
@property (nonatomic) double maximumTouchMovement;
@property (readonly, nonatomic) double distanceFromInitialPoint;

- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_updateDistanceFromInitialPoint;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_incrementTouchesBy:(unsigned long long)a0;
- (void)_decrementTouchesBy:(unsigned long long)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_beginWithRequestID:(unsigned long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
