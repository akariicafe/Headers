@class CDPRecoveryController, NSString, DummyWebAccessStateController, CDPRecoveryTestController, CDPUIController, DummyWalrusStateController;

@interface SettingsController : PSListController <CDPAuthProvider> {
    BOOL _didUseSMS;
    CDPUIController *_uiController;
    CDPRecoveryTestController *_recoveryTestController;
    CDPRecoveryController *_recoveryController;
    DummyWalrusStateController *_walrusStateController;
    DummyWebAccessStateController *_webAccessStatusController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebAccessStatus:(BOOL)a0;
- (void)beginIDMSRecoveryWithFailure:(id)a0;
- (id)_contextForPrimaryAccount;
- (void)beginFMIPRecovery:(id)a0;
- (void)removeSpinnerFromSpecifier:(id)a0;
- (void)promptFor6DigitICSC:(id)a0;
- (BOOL)_forceInlineUI;
- (BOOL)_didUseSMSVerification;
- (id)_walrusSpecifiers;
- (void)showEnableWebAccessUI:(id)a0;
- (id)_recoverStingrayDataSpecifier;
- (void)showDisableWalrusUI:(id)a0;
- (void)_recoverAndSyncrhonizeStingrayData:(id)a0;
- (void)startBeneficiaryFlow:(id)a0;
- (void)promptForLocalSecret:(id)a0;
- (id)_webAccessSpecifiers;
- (void)promptFor6DigitRemoteSecret:(id)a0;
- (void)deviceToDeviceAccountUpgradeCardUI:(id)a0;
- (void)startSpinnerForSpecifier:(id)a0;
- (BOOL)_enableWalrus;
- (void)promptFor4DigitRemoteSecret:(id)a0;
- (id)webAccessEnabled;
- (void)promptFor4DigitICSC:(id)a0;
- (void)viewDidLoad;
- (id)_recoveryKeySpecifierRegen;
- (void)promptForCustomNumericRemoteSecret:(id)a0;
- (id)_fakeDevicesWithExpectedSecret:(id)a0 isNumber:(BOOL)a1 numericLength:(id)a2;
- (BOOL)shouldAllowCDPEnrollment;
- (void)generateNewRecoveryKey:(id)a0;
- (id)_enableWalrusSwitchCellSpecifier;
- (void)beginIDMSRecoveryWithRKSkip:(id)a0;
- (void)showDisableWebAccessUI:(id)a0;
- (void)promptForCustomAlphanumericRemoteSecret:(id)a0;
- (void)beginIDMSRecoveryRK:(id)a0;
- (void)beginIDMSRecovery:(id)a0;
- (BOOL)_offerRemoteApproval;
- (void)showEnableWalrusUI:(id)a0;
- (id)specifiers;
- (id)getUserDefaultEnabled:(id)a0;
- (id)_recoveryKeySpecifier;
- (void)_showWalrusChangeUI:(unsigned long long)a0;
- (void)_showStatusChangeUIFor:(id)a0;
- (void)_loadSpecifiers;
- (void)setUserDefaultEnabled:(id)a0 specifier:(id)a1;
- (void)setWalrusStatus:(BOOL)a0;
- (id)walrusEnabled;
- (BOOL)_rkMandate;
- (void)enableCDP:(id)a0;
- (void)promptForComplexICSC:(id)a0;
- (void)promptForRandomICSC:(id)a0;
- (id)_recoverAndSyncrhonizeDataSpecifier;
- (void)_recoverStingrayData:(id)a0;
- (void).cxx_destruct;
- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (void)_showWebAccessChangeUI:(unsigned long long)a0;
- (void)beginIDMSRecoveryPrimary:(id)a0;

@end
