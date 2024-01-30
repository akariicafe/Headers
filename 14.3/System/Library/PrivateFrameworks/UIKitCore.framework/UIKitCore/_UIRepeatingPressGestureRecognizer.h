@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {
    BOOL _timerOn;
    long long _delayIndex;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (readonly, nonatomic) double _force;
@property (nonatomic) unsigned long long changeCount;

+ (double)delayForRepeatNumber:(long long)a0;

- (BOOL)_shouldReceivePress:(id)a0;
- (void)setView:(id)a0;
- (void)_resetGestureRecognizer;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_endPress;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_nextStep:(id)a0;
- (void)_scheduleNextTimer;
- (void)_finishNextStep:(id)a0;
- (BOOL)_isGestureType:(long long)a0;
- (void)_clearTapTimer;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_beginPress;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_cancelPress;
- (void)_changePress;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
