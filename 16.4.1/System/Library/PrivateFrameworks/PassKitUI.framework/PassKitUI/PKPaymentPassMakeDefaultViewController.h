@class PKAssertion, PKPaymentProvisioningController, PKPaymentPass;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentPassMakeDefaultViewController : PKExplanationViewController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentPass *_pass;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKAssertion *_notificationSupressionAssertion;
}

+ (BOOL)shouldOfferMakeDefaultForPass:(id)a0 provisioningController:(id)a1;

- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (void)_acquireAssertion;
- (void)_invalidateAssertion;
- (void)_performAddToWatchFlowWithCompletionHandler:(id /* block */)a0;
- (void)_showAddToWatchOfferWithCompletionHandler:(id /* block */)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisioningController:(id)a0 paymentPass:(id)a1 context:(long long)a2 delegate:(id)a3;
- (void)proceedToNextScreen;

@end
