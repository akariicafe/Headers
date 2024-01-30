@class UIViewController, NSString, PKPaymentProvisioningController, PKPasscodeUpgradeFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowController : NSObject <CIDVUIProofingFlowManagerDelegate, PKSetupFlowControllerProtocol> {
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    UIViewController *_rootViewController;
    BOOL _allowsManualEntry;
}

@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) long long setupContext;
@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (nonatomic) BOOL hideSetupLaterButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)proofingFlowManager:(id)a0 completedProofingWithError:(id)a1;
- (void)proofingFlowManager:(id)a0 didChangeActiveConfigurations:(id)a1;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)a0 allowsManualEntry:(BOOL)a1;
- (id)manualEntryPaymentSetupViewControllerForProduct:(id)a0 allowsSelectingBank:(BOOL)a1;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)a0 state:(long long)a1 allowsManualEntry:(BOOL)a2;
- (id)initialPaymentSetupViewControllerForMode:(long long)a0 allowsManualEntry:(BOOL)a1 allowsHeroScreen:(BOOL)a2;
- (id)_paymentSetupViewControllerForAssociatedCredential:(id)a0 product:(id)a1 allowsManualEntry:(BOOL)a2;
- (id)paymentSetupViewControllerForAssociatedCredentials:(id)a0 product:(id)a1 allowsManualEntry:(BOOL)a2 paymentSetupMode:(long long)a3;
- (id)_defaultPaymentSetupViewControllerAllowingManualEntry:(BOOL)a0 allowsHeroScreen:(BOOL)a1;
- (id)manualEntryPaymentSetupViewControllerForProduct:(id)a0 allowsSelectingBank:(BOOL)a1 allowsHeroScreen:(BOOL)a2;
- (void)_terminateSetupFlowWithViewController:(id)a0;
- (id)_onboardingViewControllerForProduct:(id)a0;
- (id)_barcodePaymentOnboardingViewControllerForProduct:(id)a0;
- (void)presentPasscodeUpgradeOnViewController:(id)a0 completion:(id /* block */)a1;
- (id)_offerOptionalExpressModeSetup;
- (id)_watchExtensionInstallationViewController;
- (id)_nextPaymentCredentialControllerWithSetupProduct:(id)a0 allowsManualEntry:(BOOL)a1;
- (id)_offerMakeDefaultViewController;
- (id)_offerAMPEnrollmentViewController;
- (id)_educationViewControllerShouldShow;
- (void)provisioningViewController:(id)a0 pushViewController:(id)a1 withCompletion:(id /* block */)a2;
- (void)presentProductSetupForProductSelectionViewController:(id)a0 rootViewController:(id)a1 product:(id)a2 allowsManualEntry:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
- (void)_bankAppViewControllerForProduct:(id)a0 completion:(id /* block */)a1;
- (void)presentHSA2UpgradePromptIfNeededForViewController:(id)a0 product:(id)a1 fallbackProductTitle:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)presentPasscodeUpgradeIfNeededForProduct:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void)_prepareViewControllerForProvsioningFlow:(id)a0;
- (void)_presentSecurityCapabilitiesFlowWithFeature:(unsigned long long)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (id)initialPaymentSetupViewControllerForMode:(long long)a0 allowsManualEntry:(BOOL)a1;
- (void)presentMultiCredentialPaymentSetupWithCredentials:(id)a0 product:(id)a1 viewController:(id)a2 completion:(id /* block */)a3;
- (void)presentProductsSetupForProductCategoriesViewController:(id)a0 category:(id)a1 products:(id)a2 allowsManualEntry:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
- (void)presentCameraFlowForProductSelectionViewController:(id)a0 product:(id)a1 completion:(id /* block */)a2;
- (void)presentBankAppFlowForProductSelectionViewController:(id)a0 product:(id)a1 completion:(id /* block */)a2;
- (void)presentHSA2UpgradePromptIfNeededForViewController:(id)a0 credentials:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
