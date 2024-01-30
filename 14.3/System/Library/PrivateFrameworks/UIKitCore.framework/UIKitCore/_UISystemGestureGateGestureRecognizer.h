@class NSTimer;

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {
    unsigned char _systemGestureGateType;
    unsigned char _systemGesturesRecognitionPossible : 1;
    unsigned char _waitingForSystemGestureStateNotification : 1;
    double _lastTouchTime;
    NSTimer *_delayTimeoutTimer;
}

+ (BOOL)_shouldDefaultToTouches;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)_gateGestureTypeString;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)setDelaysTouchesBegan:(BOOL)a0;
- (void)setDelaysTouchesEnded:(BOOL)a0;
- (id)initWithWindow:(id)a0 type:(unsigned char)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)_timeOut;
- (void)_systemGestureStateChanged:(id)a0;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
