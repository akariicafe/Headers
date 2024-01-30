@class PKSetupAssistantContext;

@interface PKPaymentSetupAssistantController : NSObject {
    unsigned long long _setupAssistant;
    PKSetupAssistantContext *_setupAssistantContext;
}

+ (id)requiredPaymentSetupFileURLs;

- (void).cxx_destruct;
- (id)initWithSetupAssistant:(unsigned long long)a0 setupAssistantContext:(id)a1;
- (void)_preflightPaymentSetupProvisioningController:(id)a0 completion:(id /* block */)a1;
- (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
- (BOOL)_setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
- (void)_shouldRunAppleCashFlow:(BOOL *)a0 shouldRunPaymentSetupFlow:(BOOL *)a1 pairingFamilyMember:(id)a2 pairingPeerPaymentAccount:(id)a3 parentFamilyMember:(id)a4 parentPeerPaymentAccount:(id)a5;
- (void)_setupAssistantViewControllerWithCompletion:(id /* block */)a0;
- (void)_phoneStartingViewControllerForPaymentSetupContext:(long long)a0 completion:(id /* block */)a1;
- (void)_bridgeStartingViewControllerForPaymentSetupContext:(long long)a0 completion:(id /* block */)a1;
- (id)_provisioningControllerWithWebService:(id)a0;
- (id)_peerPaymentCredential;
- (id)_bridgeContextDefaultLocalCredential;
- (void)setupFlowWithCompletion:(id /* block */)a0;
- (void)setupAssistantViewControllerWithCompletion:(id /* block */)a0;

@end
