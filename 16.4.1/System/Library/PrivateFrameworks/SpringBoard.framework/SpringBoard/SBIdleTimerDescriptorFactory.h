@class SBIdleTimerSettings, SBTelephonyManager, SBPrototypeController, SBBacklightController, SBAlertItemsController, SpringBoard, SBLockScreenManager, SBUIBiometricResource, SBConferenceManager, SBIdleTimerGlobalStateMonitor, SBMainWorkspace;

@interface SBIdleTimerDescriptorFactory : NSObject {
    SBIdleTimerGlobalStateMonitor *_stateMonitor;
    int _previousShouldUseAttentionSensorAccess;
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

- (id)initWithGlobalStateMonitor:(id)a0;
- (BOOL)updateIdleTimerSettingsForThermalBlockedMode:(id)a0;
- (void)_updateIdleTimerSettingsWarnInterval:(id)a0 totalInterval:(double)a1;
- (BOOL)updateIdleTimerSettingsForPrototypeSettings:(id)a0;
- (BOOL)sanitizeDescriptorForLockscreenDefaults:(id)a0;
- (id)idleTimerDescriptorForBehavior:(id)a0;
- (BOOL)updateIdleTimerSettingsForAutoLockTimeout:(id)a0;
- (BOOL)updateIdleTimerSettingsForDuration:(long long)a0 descriptor:(id)a1;
- (BOOL)updateIdleTimerSettingsForFaceDown:(id)a0;
- (BOOL)_isIdleDurationForever:(double)a0;
- (BOOL)sanitizeWarnInterval:(id)a0;
- (BOOL)updateIdleTimerSettingsForWarnInterval:(id)a0;
- (BOOL)sanitizeSettingsAfterSetup:(id)a0 duration:(long long)a1;
- (BOOL)updateIdleTimerSettingsForTelephony:(id)a0;
- (BOOL)sanitizeTotalDuration:(id)a0;
- (BOOL)updateIdleTimerSettingsForDefaultWarnInterval:(id)a0;
- (BOOL)updateIdleTimerSettingsForPowerDefaults:(id)a0;
- (BOOL)updateIdleTimerSettingsForBatterySaverMode:(id)a0;
- (BOOL)updateIdleTimerSettingsForUnlockedWithMesa:(id)a0;
- (BOOL)updateIdleTimerSettingsWithCustomTimeouts:(id)a0 fromBehavior:(id)a1;
- (BOOL)updateIdleTimerSettingsForSecurityDefaults:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldUseAttentionSensor;
- (BOOL)sanitizeSettingsAfterInitialSetup:(id)a0;
- (BOOL)updateIdleTimerSettingsForActiveClientConfiguration:(id)a0;

@end
