@class NSString, SBPasscodeAlertItem, SBPasscodeComplianceAlertItem, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface SBPasscodeController : NSObject {
    SBPasscodeAlertItem *_passcodeAlertItem;
    int _mode;
    NSString *_previousPasscode;
    NSString *_newPasscode;
    int _unlockScreenType;
    int _simplePasscodeType;
    SBPasscodeComplianceAlertItem *_complianceAlertItem;
    NSDate *_forcedComplianceDate;
    id _manageConfigurationEffectiveSettingsObserver;
    id _telephonyNotificationObserver;
    int _restoreCompletedAlertStateChangedToken;
    BOOL _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
    NSObject<OS_dispatch_queue> *_passcodeComplianceQueue;
}

+ (id)sharedInstance;

- (void)_passwordEntered:(id)a0;
- (void)_abort;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_userWantsToComplyNow:(BOOL)a0;
- (void)_startListeningToManagedConfigurationNotification;
- (void)_stopListeningToManagedConfigurationNotification;
- (void)_fetchAndSetUnlockScreenTypeForNewPasscode:(BOOL)a0;
- (void)_presentPasscodeAlertItemWithMode:(int)a0 alertItemErrorString:(id)a1 unlockScreenType:(int)a2;
- (void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
- (void)checkPasscodeCompliance;
- (void)forceUserToChangePasscode;
- (void)_stopListeningToTelephonyNotifications;
- (void)_didEndCall;
- (BOOL)_isRestoreCompletedAlertActive;
- (void)_activateComplianceAlert;
- (void)_startListeningToTelephonyNotifications;
- (void)_startListeningToRestoreCompletedAlertStateChangedNotifications;

@end
