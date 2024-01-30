@class UIDelayedAction, CADisplayLink;

@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double touchStartTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } originalCentroid;
@property (readonly, nonatomic) UIDelayedAction *delayedAction;
@property (nonatomic) double minimumDurationRequired;
@property (nonatomic) double allowableMovement;
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (readonly, nonatomic) double touchDuration;
@property (readonly, nonatomic) double touchForce;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)_performDelayedBegin;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_exceededNumberOfTouchesForEvent:(id)a0;
- (void)_displayLinkDidFire:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_cancelOrFail;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
