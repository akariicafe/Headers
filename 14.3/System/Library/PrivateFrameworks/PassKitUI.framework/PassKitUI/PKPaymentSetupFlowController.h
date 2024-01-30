@class NSString, PKPaymentProvisioningController, PKPasscodeUpgradeFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowController : NSObject <PKSetupFlowControllerProtocol> {
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
}

@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) long long setupContext;
@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)a0 allowsManualEntry:(BOOL)a1;
- (void).cxx_destruct;
- (id)_paymentSetupViewControllerForAssociatedCredential:(id)a0 product:(id)a1 allowsManualEntry:(BOOL)a2;
- (id)_defaultPaymentSetupViewControllerAllowingManualEntry:(BOOL)a0;
- (id)_onboardingViewControllerForProduct:(id)a0;
- (id)_barcodePaymentOnboardingViewControllerForProduct:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2;
- (id)_offerOptionalExpressModeSetup;
- (id)_watchExtensionInstallationViewController;
- (id)_nextPaymentCredentialControllerWithSetupProduct:(id)a0 allowsManualEntry:(BOOL)a1;
- (id)_offerMakeDefaultViewController;
- (id)_offerAMPEnrollmentViewController;
- (id)_educationViewControllerShouldShow;
- (id)initialPaymentSetupViewControllerForMode:(long long)a0 allowsManualEntry:(BOOL)a1;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (id)manualEntryPaymentSetupViewControllerForProduct:(id)a0 allowsSelectingBank:(BOOL)a1;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)a0 state:(long long)a1 allowsManualEntry:(BOOL)a2;
- (id)paymentSetupViewControllerForAssociatedCredentials:(id)a0 product:(id)a1 allowsManualEntry:(BOOL)a2;
- (void)presentPasscodeUpgradeOnViewController:(id)a0 completion:(id /* block */)a1;

@end
