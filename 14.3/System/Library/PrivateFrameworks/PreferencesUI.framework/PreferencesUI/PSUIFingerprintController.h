@interface PSUIFingerprintController : PSListController

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;

- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)passcodeController;
- (id)representedBiometricIdentity;
- (void)setFingerprintName:(id)a0;
- (id)fingerprintName;
- (void)deleteFingerprint:(id)a0;

@end
