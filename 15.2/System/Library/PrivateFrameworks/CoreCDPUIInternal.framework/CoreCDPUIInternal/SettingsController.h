@class CDPRecoveryController, NSString, CDPRecoveryTestController, CDPUIController;

@interface SettingsController : PSListController <CDPAuthProvider> {
    BOOL _didUseSMS;
    CDPUIController *_uiController;
    CDPRecoveryTestController *_recoveryTestController;
    CDPRecoveryController *_recoveryController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (BOOL)shouldAllowCDPEnrollment;
- (id)_contextForPrimaryAccount;
- (void)beginIDMSRecoveryPrimary:(id)a0;
- (void)viewDidLoad;
- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (void)startSpinnerForSpecifier:(id)a0;
- (void)promptForLocalSecret:(id)a0;
- (void)promptFor4DigitICSC:(id)a0;
- (void)startBeneficiaryFlow:(id)a0;
- (void)_recoverStingrayData:(id)a0;
- (void)removeSpinnerFromSpecifier:(id)a0;
- (id)_recoveryKeySpecifierRegen;
- (id)_recoverStingrayDataSpecifier;
- (void)enableCDP:(id)a0;
- (void)promptForRandomICSC:(id)a0;
- (void)promptForComplexICSC:(id)a0;
- (void)promptFor6DigitICSC:(id)a0;
- (void)promptForCustomAlphanumericRemoteSecret:(id)a0;
- (void)beginIDMSRecoveryWithFailure:(id)a0;
- (void)beginIDMSRecoveryRK:(id)a0;
- (void).cxx_destruct;
- (id)_fakeDevicesWithExpectedSecret:(id)a0 isNumber:(BOOL)a1 numericLength:(id)a2;
- (BOOL)_offerRemoteApproval;
- (void)_recoverAndSyncrhonizeStingrayData:(id)a0;
- (id)_recoverAndSyncrhonizeDataSpecifier;
- (void)generateNewRecoveryKey:(id)a0;
- (void)setUserDefaultEnabled:(id)a0 specifier:(id)a1;
- (void)promptForCustomNumericRemoteSecret:(id)a0;
- (void)promptFor4DigitRemoteSecret:(id)a0;
- (id)_recoveryKeySpecifier;
- (id)getUserDefaultEnabled:(id)a0;
- (void)promptFor6DigitRemoteSecret:(id)a0;
- (void)beginFMIPRecovery:(id)a0;
- (BOOL)_forceInlineUI;
- (void)beginIDMSRecovery:(id)a0;
- (void)deviceToDeviceAccountUpgradeCardUI:(id)a0;
- (BOOL)_didUseSMSVerification;
- (void)_loadSpecifiers;

@end
