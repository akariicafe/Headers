@class NSString, BSTimer;
@protocol SBHomeButtonShowPasscodeRecognizerDelegate;

@interface CSHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer> {
    NSString *_simplePublicDescription;
    unsigned long long _state;
    BOOL _fingerWasOnInitially;
    BOOL _fingerHasLifted;
    BSTimer *_minimumTimer;
    NSString *_terminalStateReasoning;
}

@property (weak, nonatomic) id<SBHomeButtonShowPasscodeRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleBiometricEvent:(unsigned long long)a0;
- (unsigned long long)_state;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)noteAuthenticated:(BOOL)a0;
- (id)initWithFingerOn:(BOOL)a0;
- (void)_reallySetState:(unsigned long long)a0 forReason:(id)a1;
- (void)_invalidateMinimumTimer;
- (void)_switchedFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)_minimumTimerFired;
- (void)_simulateTimerFiring;

@end
