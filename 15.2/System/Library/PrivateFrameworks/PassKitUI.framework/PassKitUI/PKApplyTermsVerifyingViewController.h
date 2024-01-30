@class PKApplyController, NSString, CLInUseAssertion;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController {
    PKApplyController *_applyController;
    NSString *_termsIdentifier;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    BOOL _isProcessingTerms;
    unsigned long long _featureIdentifier;
    CLInUseAssertion *_inUseAssertion;
}

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_terminateSetupFlow;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 termsIdentifier:(id)a3;
- (id)analyticsPageTag;
- (void)_showActivationSpinner:(BOOL)a0;
- (void)_processTerms;

@end
