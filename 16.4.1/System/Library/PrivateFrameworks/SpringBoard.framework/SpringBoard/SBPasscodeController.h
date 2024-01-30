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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_passwordEntered:(id)a0;
- (void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
- (void)_abort;
- (void)_activateComplianceAlert;
- (void)_didEndCall;
- (void)_fetchAndSetUnlockScreenTypeForNewPasscode:(BOOL)a0;
- (BOOL)_isRestoreCompletedAlertActive;
- (void)_presentPasscodeAlertItemWithMode:(int)a0 alertItemErrorString:(id)a1 unlockScreenType:(int)a2;
- (void)_startListeningToManagedConfigurationNotification;
- (void)_startListeningToTelephonyNotifications;
- (void)_stopListeningToManagedConfigurationNotification;
- (void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
- (void)_stopListeningToTelephonyNotifications;
- (void)_userWantsToComplyNow:(BOOL)a0;
- (void)checkPasscodeCompliance;
- (void)forceUserToChangePasscode;

@end
