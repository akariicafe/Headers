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

- (void)_performDelayedBegin;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_displayLinkDidFire:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_exceededNumberOfTouchesForEvent:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_cancelOrFail;
- (void).cxx_destruct;
- (void)reset;
- (id)_allTouchesMatchingRequirementsForEvent:(id)a0;

@end
