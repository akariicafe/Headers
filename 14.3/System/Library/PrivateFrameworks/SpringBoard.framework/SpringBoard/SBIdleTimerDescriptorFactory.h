@class SBIdleTimerSettings, SBTelephonyManager, SBPrototypeController, SBBacklightController, SBAlertItemsController, SpringBoard, SBLockScreenManager, SBUIBiometricResource, SBConferenceManager, SBIdleTimerGlobalStateMonitor, SBMainWorkspace;

@interface SBIdleTimerDescriptorFactory : NSObject {
    SBIdleTimerGlobalStateMonitor *_stateMonitor;
}

@property (retain, nonatomic, getter=_springBoard, setter=_setSpringBoard:) SpringBoard *springBoard;
@property (retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController;
@property (retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController;
@property (retain, nonatomic, getter=_prototypeController, setter=_setPrototypeController:) SBPrototypeController *prototypeController;
@property (retain, nonatomic, getter=_idleTimerPrototypeSettings, setter=_setIdleTimerPrototypeSettings:) SBIdleTimerSettings *idleTimerPrototypeSettings;
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace;
@property (retain, nonatomic, getter=_biometricResource, setter=_setBiometricResource:) SBUIBiometricResource *biometricResource;
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager;
@property (retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager;

+ (id)disabledIdleTimerDescriptor;

- (BOOL)updateIdleTimerSettingsForThermalBlockedMode:(id)a0;
- (BOOL)updateIdleTimerSettingsForPowerDefaults:(id)a0;
- (void).cxx_destruct;
- (id)idleTimerDescriptorForBehavior:(id)a0;
- (BOOL)sanitizeTotalDuration:(id)a0;
- (BOOL)updateIdleTimerSettingsForActiveClientConfiguration:(id)a0;
- (BOOL)updateIdleTimerSettingsForDuration:(long long)a0 descriptor:(id)a1;
- (BOOL)updateIdleTimerSettingsForUnlockedWithMesa:(id)a0;
- (BOOL)_isIdleDurationForever:(double)a0;
- (id)initWithGlobalStateMonitor:(id)a0;
- (BOOL)updateIdleTimerSettingsForFaceDown:(id)a0;
- (BOOL)updateIdleTimerSettingsForPrototypeSettings:(id)a0;
- (BOOL)sanitizeSettingsAfterInitialSetup:(id)a0;
- (BOOL)sanitizeWarnInterval:(id)a0;
- (BOOL)updateIdleTimerSettingsForBatterySaverMode:(id)a0;
- (void)_updateIdleTimerSettingsWarnInterval:(id)a0 totalInterval:(double)a1;
- (BOOL)updateIdleTimerSettingsForAutoLockTimeout:(id)a0;
- (BOOL)updateIdleTimerSettingsForTelephony:(id)a0;
- (BOOL)updateIdleTimerSettingsForWarnInterval:(id)a0;
- (BOOL)updateIdleTimerSettingsForSecurityDefaults:(id)a0;
- (BOOL)sanitizeSettingsAfterSetup:(id)a0 duration:(long long)a1;
- (BOOL)_shouldUseAttentionSensor;
- (BOOL)updateIdleTimerSettingsWithCustomTimeouts:(id)a0 fromBehavior:(id)a1;
- (BOOL)sanitizeDescriptorForLockscreenDefaults:(id)a0;
- (BOOL)updateIdleTimerSettingsForDefaultWarnInterval:(id)a0;

@end
