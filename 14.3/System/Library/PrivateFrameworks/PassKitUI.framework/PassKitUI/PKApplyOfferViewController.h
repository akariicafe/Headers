@class PKPaymentInstallmentConfiguration, NSString, CLInUseAssertion, PKAccountFlowController, PKApplyOfferCreditCardView;

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol> {
    PKAccountFlowController *_accountController;
    PKApplyOfferCreditCardView *_offerView;
    NSString *_offerTermsIdentifier;
    CLInUseAssertion *_inUseAssertion;
    BOOL _useCompactLayout;
    PKPaymentInstallmentConfiguration *_installmentConfiguration;
    BOOL _hasSufficientOTBForInstallment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;
- (void)_termsAccepted:(BOOL)a0;
- (void)_openTermsAndConditions;
- (void)_setupForBroadwayApplication:(id)a0;
- (void)_terminateApplyFlowWithoutDeclining;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
