@class CDPRecoveryKeyEntryViewModel, NSString, NSArray, UINavigationController, CDPDevicePickerViewController, CDPRemoteDeviceSecretValidator, UIViewController, CDPContext, RemoteUIController;
@protocol CDPUIDelegate, CDPUIInheritanceUIProvider;

@interface CDPUIController : CDPUIBaseController <KeychainSyncViewControllerDelegate, RemoteUIControllerDelegate, CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate> {
    NSArray *_devices;
    UINavigationController *_navController;
    CDPRemoteDeviceSecretValidator *_remoteSecretValidator;
    CDPDevicePickerViewController *_devicePicker;
    UIViewController *_rootViewController;
    CDPContext *_activeContext;
    BOOL _isWalrusEnabled;
    double _rpdProbationDuration;
    RemoteUIController *_storageAppListRemoteUIController;
    id<CDPUIInheritanceUIProvider> _inheritanceUIProvider;
    CDPRecoveryKeyEntryViewModel *_recoveryKeyViewModel;
}

@property (copy, nonatomic) NSString *titleText;
@property (weak, nonatomic) id<CDPUIDelegate> delegate;
@property (nonatomic) BOOL forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)remoteUIController:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)cdpContext:(id)a0 beginRemoteApprovalWithValidator:(id)a1;
- (void)cdpContext:(id)a0 presentRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithSecretValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpContext:(id)a0 showError:(id)a1 withDefaultIndex:(long long)a2 withCompletion:(id /* block */)a3;
- (void)cdpRecoveryFlowContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 validator:(id)a2;
- (void)keychainSyncController:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)cancelTapped:(id)a0;
- (id)_custodianAskHelpViewController;
- (id)_escapeOfferForDevice:(id)a0 withMask:(unsigned long long)a1;
- (void)_validateCustodianRecoveryInfo:(id)a0;
- (void)dismissRecoveryFlow:(id)a0 completion:(id /* block */)a1;
- (void)_beginDevicePickerFlowFromEntryController:(id)a0;
- (void)_beginWaitingForApprovalFlow;
- (id)_chooseDeviceEscapeOption;
- (id)_custodianCodeEntryViewControllerWithController:(id)a0;
- (id)_custodianRecoveryEscapeOption;
- (id)_deleteiCloudDataEscapeOfferWithTitle:(id)a0 message:(id)a1 skipButtonTitle:(id)a2;
- (id)_deviceLimitOfferForDevice:(id)a0;
- (void)_dismissPresentedViewControllerCompletion:(id /* block */)a0;
- (void)_dismissPresentedViewControllerWithReason:(id)a0 completion:(id /* block */)a1;
- (id)_enterCustodianCodeEscapeOfferWithCustodianController:(id)a0;
- (id)_enterCustodianCodeEscapeOptionWithCustodianController:(id)a0;
- (id)_enterCustodianCodeEscapeOptionWithCustodianController:(id)a0 presentationBlock:(id /* block */)a1;
- (id)_enterSecretLaterEscapeOptionWithSecret:(unsigned long long)a0;
- (id)_escapeOfferForCustodianFlowWithMask:(unsigned long long)a0;
- (id)_escapeOfferForMultiApprovalWithMask:(unsigned long long)a0;
- (id)_escapeOfferForSingleApprovalWithMask:(unsigned long long)a0;
- (id)_escapeOfferMessageForDevice:(id)a0 withMask:(unsigned long long)a1;
- (id)_escapeOffersForgotAllWithMask:(unsigned long long)a0 presenter:(id)a1 devices:(id)a2;
- (id)_iCloudDeleteConfirmationViewController;
- (id)_instructionsControllerForPlatform:(unsigned long long)a0 controller:(id)a1;
- (BOOL)_isQuotaServiceHost:(id)a0;
- (id)_localDeviceClass;
- (void)_presentCustodianAttemptLimitAlert;
- (void)_presentRemoteApprovalViewControllerWithEscapeOfferMask:(unsigned long long)a0;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)a0;
- (void)_presentRootController:(id)a0 completion:(id /* block */)a1;
- (id)_recoveryKeyControllerWithContext:(id)a0 secretValidator:(id)a1 completion:(id /* block */)a2;
- (id)_recoveryKeyControllerWithContext:(id)a0 validator:(id)a1 completion:(id /* block */)a2;
- (id)_recoveryKeyEscapeOffer;
- (id)_recoveryKeyEscapeOption;
- (id)_recoveryKeyEscapeOptionWithPresentationBlock:(id /* block */)a0;
- (id)_remoteApprovalEscapeOption;
- (id)_remoteSecretControllerForDevice:(id)a0;
- (id)_remoteSecretControllerForNewestDevice:(id)a0;
- (void)_replaceViewController:(id)a0 withNewController:(id)a1;
- (id)_resetAccountDataEscapeOption;
- (void)_setupDevicePickerController:(id /* block */)a0;
- (void)_showQuotaStorageAppListView:(id)a0;
- (void)_showResetKeychainConfirmationAlertWithViewController:(id)a0;
- (id)_singleICSCEscapeOfferWithMask:(unsigned long long)a0 withController:(id)a1;
- (id)_waitingForApprovalEscapeOffer;
- (id)_walrusBeginCustodianRecoveryEscapeOption;
- (id)_walrusEscapeOfferForDevice:(id)a0 withMask:(unsigned long long)a1;
- (id)_walrusEscapeOffersForgotAllWithMask:(unsigned long long)a0 presenter:(id)a1 devices:(id)a2;
- (void)approveFromAnotherDevice:(BOOL)a0;
- (void)backTappedFromRoot:(id)a0;
- (void)cancelRemoteApprovalTapped:(id)a0;
- (void)cancelledRemoteSecretEntry:(id)a0;
- (void)cdpContext:(id)a0 confirmRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (id)custodianOSSelectionViewControllerWithCustodianController:(id)a0;
- (void)devicePicker:(id)a0 didSelectDevice:(id)a1;
- (id)devicePicker:(id)a0 escapeOffersForDevices:(id)a1;
- (void)dismissAndResetAccountCDPState:(id)a0 localSecret:(id)a1;
- (void)dismissRecoveryFlow:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(id)a0;
- (void)finishValidation:(id)a0 withError:(id)a1;
- (void)handleBackPopCompletion;
- (void)performAccountReset:(id)a0;
- (void)performRecoveryKeyRecovery:(id)a0;
- (void)performRemoteApproval:(id)a0;
- (BOOL)performingAccountRecovery;
- (id)recoveryKeyEntryControllerForCircleJoinWithCancel:(BOOL)a0;
- (void)remoteSecretEntry:(id)a0 depletedRemainingAttemptsForDevice:(id)a1;
- (void)remoteSecretEntry:(id)a0 didAcceptValidRemoteSecretForDevice:(id)a1;
- (void)trySettingPasscodeAndResetCDP;

@end
