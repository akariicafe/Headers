@interface PSUIFingerprintController : PSListController

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;

- (id)specifiers;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)fingerprintName;
- (void)deleteFingerprint:(id)a0;
- (void)fetchBiometricTemplateForCurrentBiometricIdentity:(id)a0;
- (id)passcodeController;
- (void)presentAlertIfNeededBeforeDeletingFingerPrint:(id)a0;
- (void)presentAlertSheetForFingerprintBindingToGovernmentID:(id)a0;
- (void)presentPopUpAlertForFingerprintBindingToGovernmentID:(id)a0;
- (void)replaceFingerprint:(id)a0;
- (id)representedBiometricIdentity;
- (void)setFingerprintName:(id)a0;

@end
