@class NSTimer;

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {
    unsigned char _systemGestureGateType;
    unsigned char _systemGesturesRecognitionPossible : 1;
    unsigned char _waitingForSystemGestureStateNotification : 1;
    double _lastTouchTime;
    NSTimer *_delayTimeoutTimer;
}

+ (BOOL)_shouldDefaultToTouches;

- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)_resetGestureRecognizer;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithWindow:(id)a0 type:(unsigned char)a1;
- (void)_systemGestureStateChanged:(id)a0;
- (void)setDelaysTouchesBegan:(BOOL)a0;
- (id)_gateGestureTypeString;
- (void)_timeOut;
- (void)setDelaysTouchesEnded:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)a0;

@end
