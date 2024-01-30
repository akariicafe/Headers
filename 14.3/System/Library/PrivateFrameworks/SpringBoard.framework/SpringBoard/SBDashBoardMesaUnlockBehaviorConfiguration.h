@class NSString, SBLiftToWakeController, SBUIBiometricResource, CSLockScreenSettings;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration> {
    SBLiftToWakeController *_liftToWakeController;
    CSLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_setLiftToWakeController:(id)a0;
- (void)_accessibilityOptionsChanged:(id)a0;
- (void)_evaluateTriggerClass;
- (id)_unlockTriggerWithClass:(Class)a0;
- (Class)_expectedTriggerClassIncludingAccessibility:(BOOL)a0;
- (BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
- (void)liftToWakeControllerEnablementDidChange:(id)a0;
- (id)newBehaviorForCurrentConfiguration;
- (id)initWithLiftToWakeController:(id)a0 biometricResource:(id)a1 lockScreenPrototypeSettings:(id)a2;
- (Class)_currentUnlockTriggerClass;
- (id)_liftToWakeController;

@end
