@class PKApplyController, PKPaymentInstallmentConfiguration;

@interface PKFeatureOnBoardingViewController : PKOnBoardingViewController {
    unsigned long long _featureIdentifier;
    PKApplyController *_applyController;
    BOOL _isMainFeatureOnboardingPage;
    BOOL _useCompactLayout;
}

@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;

- (void).cxx_destruct;
- (id)initWithParentFlowController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 featureIdentifier:(unsigned long long)a3 provisioningController:(id)a4 paymentSetupProduct:(id)a5 currentPage:(id)a6;
- (void)_openTermsAndConditions;
- (void)_handleAccountCredential:(id)a0 completion:(id /* block */)a1;
- (void)_checkSecurityCapabilities:(unsigned long long)a0 nextStep:(id /* block */)a1;
- (void)_handleApplyFlowWithCompletion:(id /* block */)a0;
- (void)handleSetupLater;
- (void)handleProductAvailable;
- (id)nextOnboardingViewControllerWithPage:(id)a0 product:(id)a1;
- (void)viewDidLoad;

@end
