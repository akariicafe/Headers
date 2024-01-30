@protocol PXTouchingUIGestureRecognizerDelegate;

@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;
@property (nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID;
@property (nonatomic, setter=_setWillBegin:) BOOL _willBegin;
@property (nonatomic, setter=_setDidBegin:) BOOL _didBegin;
@property (nonatomic, setter=_setInitialPointInView:) struct CGPoint { double x; double y; } _initialPointInView;
@property (nonatomic) double minimumTouchDuration;
@property (nonatomic) double maximumTouchMovement;
@property (weak, nonatomic) id<PXTouchingUIGestureRecognizerDelegate> touchDelegate;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_decrementTouchesBy:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)_beginWithRequestID:(unsigned long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })initialLocationInView:(id)a0;
- (void)setState:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_incrementTouchesBy:(unsigned long long)a0;

@end
