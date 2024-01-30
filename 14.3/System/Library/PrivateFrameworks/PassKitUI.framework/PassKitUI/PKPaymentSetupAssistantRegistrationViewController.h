@class NSArray, NSString, NSMutableArray, UIButton;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController <PKPaymentSetupViewControllerDelegate, PKSetupAssistantStep> {
    UIButton *_skipButton;
    id<PKPaymentSetupViewControllerDelegate> _externalDelegate;
    BOOL _isPreflighting;
    NSMutableArray *_preflightCompletionHandlers;
    unsigned long long _preflightResult;
}

@property (readonly, nonatomic) NSArray *requiredPaymentSetupFileURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
+ (BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)a0 returningRequirements:(unsigned long long *)a1;
+ (id)defaultWebServiceForContext:(long long)a0;
+ (BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
+ (BOOL)setupAssistantNeedsToRun;

- (void).cxx_destruct;
- (void)_setExternalDelegate:(id)a0;
- (void)viewControllerDidFinishChangingPasscodeComplex:(id)a0;
- (void)viewControllerDidFailToChangePasscodeComplex:(id)a0;
- (void)viewController:(id)a0 didShowProvisioningError:(id)a1;
- (void)viewControllerDidShowEligibilityIssue:(id)a0;
- (void)viewController:(id)a0 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 completion:(id /* block */)a2;
- (void)viewController:(id)a0 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 withShouldContinue:(BOOL)a2 error:(id)a3;
- (void)viewController:(id)a0 requestPasscodeUpgradeWithCompletion:(id /* block */)a1;
- (void)viewController:(id)a0 didExitPasscodeUpgradeWithShouldContinue:(BOOL)a1 error:(id)a2;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (id)initWithPaymentWebService:(id)a0 context:(long long)a1 delegate:(id)a2;
- (void)bridgeSetupAssistantDidFinishPasscodeChange;
- (void)bridgeSetupAssistantDidFailToChangePasscode;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)viewDidLoad;

@end
