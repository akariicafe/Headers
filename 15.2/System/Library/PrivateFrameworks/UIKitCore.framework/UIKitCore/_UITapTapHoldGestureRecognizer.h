@interface _UITapTapHoldGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) int currentNumberOfPresses;
@property (nonatomic) double startTime;
@property (nonatomic) double pressEventBeginTimestamp;
@property (nonatomic) BOOL isWaitingForHoldToAction;
@property (nonatomic) BOOL isInHoldToAction;
@property (nonatomic) BOOL isWaitingForTooSlowForDoubleTap;
@property (nonatomic) long long gestureType;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)holdToAction:(id)a0;
- (void)scheduleHoldToAction;
- (void)cancelPendingHoldToAction;
- (void)cancelPendingTooSlowForDoubleTap;
- (void)scheduleTooSlowForDoubleTap;
- (void)tooSlowForDoubleTap:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldFailInResponseToPresses:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
