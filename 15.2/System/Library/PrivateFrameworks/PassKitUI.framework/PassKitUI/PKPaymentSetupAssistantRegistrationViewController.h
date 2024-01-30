@class NSArray, PKPaymentSetupAssistantDelegateProxy, PKPaymentSetupAssistantController;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController {
    PKPaymentSetupAssistantDelegateProxy *_delegateProxy;
    PKPaymentSetupAssistantController *_setupAssistantController;
}

@property (readonly, nonatomic) NSArray *requiredPaymentSetupFileURLs;

+ (id)defaultWebServiceForContext:(long long)a0;
+ (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
+ (BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
+ (BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)a0 returningRequirements:(unsigned long long *)a1;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithPaymentWebService:(id)a0 context:(long long)a1 delegate:(id)a2;

@end
