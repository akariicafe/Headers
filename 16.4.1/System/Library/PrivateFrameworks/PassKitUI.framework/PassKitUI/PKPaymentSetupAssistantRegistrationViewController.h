@class NSArray, PKPaymentSetupAssistantDelegateProxy, PKPaymentSetupAssistantCoreController;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController {
    PKPaymentSetupAssistantDelegateProxy *_delegateProxy;
    PKPaymentSetupAssistantCoreController *_setupAssistantCoreController;
}

@property (readonly, nonatomic) NSArray *requiredPaymentSetupFileURLs;

+ (BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
+ (BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)a0 returningRequirements:(unsigned long long *)a1;
+ (id)defaultWebServiceForContext:(long long)a0;
+ (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithPaymentWebService:(id)a0 context:(long long)a1 delegate:(id)a2;

@end
