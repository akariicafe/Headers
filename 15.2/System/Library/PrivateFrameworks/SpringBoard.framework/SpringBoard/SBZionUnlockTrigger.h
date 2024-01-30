@class BSTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    BOOL _hasVisibleContentToReveal;
    BOOL _fingerOn;
    BOOL _fingerOffSinceWake;
    BSTimer *_restToOpenTimer;
    BSTimer *_minTouchIDTimer;
}

- (void)screenOff;
- (void)screenOn;
- (void)lockButtonDown;
- (id)description;
- (BOOL)bioUnlock;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
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
