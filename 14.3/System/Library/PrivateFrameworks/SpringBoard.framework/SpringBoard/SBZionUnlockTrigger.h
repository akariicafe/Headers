@class BSTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    BOOL _fingerOn;
    BOOL _fingerOffSinceWake;
    BSTimer *_restToOpenTimer;
    BSTimer *_minTouchIDTimer;
}

- (void)screenOff;
- (void).cxx_destruct;
- (void)lockButtonDown;
- (id)description;
- (id)succinctDescriptionBuilder;
- (BOOL)bioUnlock;
- (void)fingerOn;
- (void)fingerOff;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)a0;
- (BOOL)_isRestToOpenAvailable;
- (void)_cancelMinTouchIDTimer;
- (void)_startRestToOpenTimerWithDuration:(double)a0;
- (void)_startRestToOpenTimer;
- (void)_cancelRestToOpenTimer;
- (void)_evaluateRestToOpenTimer;

@end
