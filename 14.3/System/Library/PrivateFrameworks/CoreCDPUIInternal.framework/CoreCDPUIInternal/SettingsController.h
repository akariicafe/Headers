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

- (void)promptForRandomICSC:(id)a0;
- (BOOL)_didUseSMSVerification;
- (void)beginIDMSRecoveryWithFailure:(id)a0;
- (void)promptFor6DigitICSC:(id)a0;
- (void).cxx_destruct;
- (void)promptForCustomAlphanumericRemoteSecret:(id)a0;
- (void)_loadSpecifiers;
- (void)promptFor6DigitRemoteSecret:(id)a0;
- (id)_recoverAndSyncrhonizeDataSpecifier;
- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (void)promptFor4DigitICSC:(id)a0;
- (void)setUserDefaultEnabled:(id)a0 specifier:(id)a1;
- (id)specifiers;
- (void)promptForCustomNumericRemoteSecret:(id)a0;
- (void)beginIDMSRecoveryRK:(id)a0;
- (void)enableCDP:(id)a0;
- (BOOL)_offerRemoteApproval;
- (id)_recoveryKeySpecifier;
- (id)_recoveryKeySpecifierRegen;
- (void)promptFor4DigitRemoteSecret:(id)a0;
- (void)promptForLocalSecret:(id)a0;
- (id)_fakeDevicesWithExpectedSecret:(id)a0 isNumber:(BOOL)a1 numericLength:(id)a2;
- (void)beginIDMSRecoveryPrimary:(id)a0;
- (void)generateNewRecoveryKey:(id)a0;
- (BOOL)shouldAllowCDPEnrollment;
- (void)_recoverAndSyncrhonizeStingrayData:(id)a0;
- (id)_recoverStingrayDataSpecifier;
- (id)getUserDefaultEnabled:(id)a0;
- (id)_contextForPrimaryAccount;
- (void)startSpinnerForSpecifier:(id)a0;
- (void)beginIDMSRecovery:(id)a0;
- (void)removeSpinnerFromSpecifier:(id)a0;
- (BOOL)_forceInlineUI;
- (void)beginFMIPRecovery:(id)a0;
- (void)_recoverStingrayData:(id)a0;
- (void)promptForComplexICSC:(id)a0;
- (void)viewDidLoad;

@end
