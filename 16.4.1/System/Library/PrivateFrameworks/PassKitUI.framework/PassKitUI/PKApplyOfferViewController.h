@class PKPaymentInstallmentConfiguration, NSString, CLInUseAssertion, UIImage, PKAccountFlowController, PKApplyOfferCreditCardView;

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol> {
    PKAccountFlowController *_accountController;
    PKApplyOfferCreditCardView *_offerView;
    NSString *_offerTermsIdentifier;
    CLInUseAssertion *_inUseAssertion;
    unsigned long long _layout;
    BOOL _useCompactLayout;
    PKPaymentInstallmentConfiguration *_installmentConfiguration;
    BOOL _hasSufficientOTBForInstallment;
}

@property (retain, nonatomic) UIImage *heroImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)analyticsPageTag;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_termsAccepted:(BOOL)a0;
- (void)_openTermsAndConditions;
- (void)_setupForBroadwayApplication:(id)a0;
- (void)_terminateApplyFlowWithoutDeclining;
- (id)analyticsAdditionalValues;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;

@end
