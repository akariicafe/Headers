@class BSAbsoluteMachTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    BSAbsoluteMachTimer *_slowPressTimer;
    BOOL _bioUnlockOccurred;
    BOOL _buttonIsDown;
    BOOL _fingerIsOn;
    BOOL _timerFired;
}

@property (nonatomic) double slowPressDuration;

- (void)screenOff;
- (id)succinctDescriptionBuilder;
- (void)_timerFired;
- (void)_invalidateTimer;
- (void)dealloc;
- (void)_startTimer;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_evaluateUnlock;
- (BOOL)_isTimerRunning;
- (BOOL)_isPrimed;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (void)menuButtonDown;
- (void)menuButtonUp;

@end
