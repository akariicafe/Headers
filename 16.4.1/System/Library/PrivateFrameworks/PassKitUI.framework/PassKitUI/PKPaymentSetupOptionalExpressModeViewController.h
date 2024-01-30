@class PKPaymentProvisioningTracker, PKPaymentProvisioningController, PKPaymentPass;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupOptionalExpressModeViewController : PKExplanationViewController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentPass *_pass;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningTracker *_provisioningTracker;
}

- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (id)_credentialViewController;
- (id)_moreInfoViewControllerWithDismissalHandler:(id /* block */)a0;
- (void)_presentNextViewController:(id)a0;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisioningController:(id)a0 paymentPass:(id)a1 context:(long long)a2 delegate:(id)a3;
- (void)proceedToNextScreen;

@end
