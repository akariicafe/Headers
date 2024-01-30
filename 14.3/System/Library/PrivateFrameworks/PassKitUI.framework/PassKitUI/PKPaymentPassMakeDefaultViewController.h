@class PKAssertion, PKPaymentProvisioningController, PKPaymentPass;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentPassMakeDefaultViewController : PKExplanationViewController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentPass *_pass;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKAssertion *_notificationSupressionAssertion;
}

+ (BOOL)shouldOfferMakeDefaultForPass:(id)a0 provisioningController:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)_invalidateAssertion;
- (void)_acquireAssertion;
- (void)proceedToNextScreen;
- (void)_performAddToWatchFlowWithCompletionHandler:(id /* block */)a0;
- (void)_showAddToWatchOfferWithCompletionHandler:(id /* block */)a0;
- (id)initWithProvisioningController:(id)a0 paymentPass:(id)a1 context:(long long)a2 delegate:(id)a3;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
