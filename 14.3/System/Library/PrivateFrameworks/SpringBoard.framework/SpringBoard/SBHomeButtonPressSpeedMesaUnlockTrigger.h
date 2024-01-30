@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _bioUnlockOccurred;
    BOOL _buttonIsDown;
    BOOL _fingerIsOn;
    BOOL _timerFired;
}

@property (retain, nonatomic, getter=_slowPressTimer, setter=_setSlowPressTimer:) BSTimer *slowPressTimer;
@property (nonatomic) double slowPressDuration;

- (void)_timerFired;
- (void)screenOff;
- (void)menuButtonUp;
- (id)init;
- (void).cxx_destruct;
- (void)menuButtonDown;
- (void)_startTimer;
- (id)description;
- (id)succinctDescriptionBuilder;
- (BOOL)bioUnlock;
- (void)_cancelTimer;
- (void)fingerOff;
- (BOOL)_isTimerRunning;
- (BOOL)_isPrimed;
- (void)_evaluateUnlock;

@end
