@class PKSetupAssistantContext;

@interface PKPaymentSetupAssistantController : PKPaymentSetupAssistantCoreController

@property (retain, nonatomic) PKSetupAssistantContext *setupAssistantContext;

- (void).cxx_destruct;
- (id)initWithSetupAssistantContext:(id)a0;
- (void)_bridgeStartingViewControllerForPaymentSetupContext:(long long)a0 completion:(id /* block */)a1;
- (void)_phoneStartingViewControllerForPaymentSetupContext:(long long)a0 completion:(id /* block */)a1;
- (void)_setupAssistantViewControllerWithCompletion:(id /* block */)a0;
- (id)initWithSetupAssistant:(unsigned long long)a0 setupAssistantContext:(id)a1;
- (void)prepareForPresentationWithCompletion:(id /* block */)a0;
- (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
- (void)setupAssistantViewControllerWithCompletion:(id /* block */)a0;
- (void)setupFlowWithCompletion:(id /* block */)a0;

@end
