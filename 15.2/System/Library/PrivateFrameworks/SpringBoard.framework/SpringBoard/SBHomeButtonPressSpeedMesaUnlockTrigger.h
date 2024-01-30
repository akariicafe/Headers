@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    BOOL _bioUnlockOccurred;
    BOOL _buttonIsDown;
    BOOL _fingerIsOn;
    BOOL _timerFired;
}

@property (retain, nonatomic, getter=_slowPressTimer, setter=_setSlowPressTimer:) BSTimer *slowPressTimer;
@property (nonatomic) double slowPressDuration;

- (void)screenOff;
- (void)_startTimer;
- (void)_cancelTimer;
- (void)_timerFired;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (id)description;
- (BOOL)bioUnlock;
- (void).cxx_destruct;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)fingerOff;
- (BOOL)_isTimerRunning;
- (BOOL)_isPrimed;
- (void)_evaluateUnlock;

@end
