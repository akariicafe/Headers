@class NSString, CSCoverSheetViewController;
@protocol SBBiometricUnlockBehaviorConfiguration, SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehavior;

@interface SBDashBoardBiometricUnlockController : NSObject <SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehaviorConfigurationDelegate, CSExternalEventHandling, SBBiometricUnlockBehavior> {
    CSCoverSheetViewController *_coverSheetViewController;
    id<SBBiometricUnlockBehaviorConfiguration> _biometricUnlockBehaviorConfiguration;
    id<SBBiometricUnlockBehavior> _biometricUnlockBehavior;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (void)setAuthenticated:(BOOL)a0;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (int)lockScreenWakeSource;
- (id)initWithCoverSheetViewController:(id)a0;
- (BOOL)biometricUnlockBehavior:(id)a0 requestsFeedback:(id)a1;
- (void)resetRestToOpen;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (BOOL)isRestToOpenAvailable;
- (void)conformsToCSEventHandling;
- (id)succinctDescription;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)startRestToOpenCoachingWithCompletion:(id /* block */)a0;
- (id)_mesaUnlockBehavior;
- (BOOL)isLockScreenShowingDefaultContent;
- (id)succinctDescriptionBuilder;
- (void)fillRestToOpenWithDuration:(double)a0;
- (void)biometricUnlockBehaviorConfigurationDidChange:(id)a0;
- (BOOL)biometricUnlockBehavior:(id)a0 requestsUnlock:(id)a1 withFeedback:(id)a2;
- (void)noteMenuButtonDown;
- (void)noteLockButtonDown;
- (void)noteMenuButtonUp;

@end
