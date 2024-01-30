@interface PSUIFingerprintController : PSListController

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)passcodeController;
- (void)presentAlertSheetForFingerprintBindingToGovernmentID:(id)a0;
- (void)deleteFingerprint:(id)a0;
- (void)fetchBiometricTemplateForCurrentBiometricIdentity:(id)a0;
- (id)representedBiometricIdentity;
- (void)presentAlertIfNeededBeforeDeletingFingerPrint:(id)a0;
- (void)replaceFingerprint:(id)a0;
- (void)presentPopUpAlertForFingerprintBindingToGovernmentID:(id)a0;
- (void)setFingerprintName:(id)a0;
- (id)fingerprintName;

@end
