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

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 termsIdentifier:(id)a3;
- (void)_terminateSetupFlow;
- (void)_showActivationSpinner:(BOOL)a0;
- (void)_processTerms;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
