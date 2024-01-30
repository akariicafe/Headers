@class KeychainSyncCountryInfo, NSString, NSArray, KeychainSyncDevicePINController, PSKeychainSyncManager, PSSpecifier, KeychainSyncPhoneSettingsFragment, PSSetupController;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate> {
    PSSpecifier *_recoverySwitch;
    NSArray *_passcodeSpecifiers;
    PSSetupController *_devicePasscodeChangeSetupController;
    KeychainSyncDevicePINController *_devicePINController;
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    NSString *_SMSTarget;
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;
    BOOL _secureBackupEnabled;
    PSKeychainSyncManager *_manager;
}

@property (nonatomic) int securityCodeType;
@property (retain, nonatomic) NSString *securityCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)phoneSettingsFragment:(id)a0 didChangePhoneNumber:(id)a1 countryInfo:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)cancelPressed;
- (void)viewWillDisappear:(BOOL)a0;
- (void)reloadSpecifiers;
- (void)keychainSyncController:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleBurnedRecord;
- (void)changeSecurityCode:(id)a0;
- (void)setUseRecovery:(id)a0 specifier:(id)a1;
- (id)useRecoveryForSepecifier:(id)a0;
- (id)passcodeSpecifiers;
- (void)_setShowsDoneButton:(BOOL)a0;
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)a0;
- (void)disableRecovery;
- (void)saveSMSTargetChanges;
- (void)navCancelPressed;
- (void)navDonePressed;

@end
