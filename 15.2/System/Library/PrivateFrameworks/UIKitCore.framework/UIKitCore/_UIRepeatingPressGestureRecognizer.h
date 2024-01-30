@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {
    BOOL _timerOn;
    long long _delayIndex;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (readonly, nonatomic) double _force;
@property (nonatomic) unsigned long long changeCount;

+ (double)delayForRepeatNumber:(long long)a0;

- (BOOL)_isGestureType:(long long)a0;
- (BOOL)_shouldReceivePress:(id)a0;
- (void)_resetGestureRecognizer;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_scheduleNextTimer;
- (void)_endPress;
- (void)_beginPress;
- (void)_nextStep:(id)a0;
- (void)_finishNextStep:(id)a0;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)setView:(id)a0;
- (void)_clearTapTimer;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_cancelPress;
- (void)_changePress;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
