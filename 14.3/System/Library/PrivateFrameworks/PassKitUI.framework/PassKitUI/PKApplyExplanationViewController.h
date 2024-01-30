@class PKApplyController, NSString;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyExplanationViewController : PKDynamicProvisioningPageViewController <PKApplyFlowControllerProtocol> {
    BOOL _isLoading;
}

@property (weak, nonatomic) PKApplyController *controller;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (copy, nonatomic) id /* block */ continueAction;
@property (copy, nonatomic) id /* block */ auxiliaryAction;
@property (copy, nonatomic) id /* block */ learnMoreAction;
@property (copy, nonatomic) id /* block */ doneAction;
@property (copy, nonatomic) id /* block */ primaryButtonAction;
@property (copy, nonatomic) id /* block */ secondaryButtonAction;
@property (copy, nonatomic) id /* block */ bodyButtonAction;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ doneButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_done;
- (void).cxx_destruct;
- (void)terminateSetupFlow;
- (void)_featureApplicationUpdated;
- (void)_learnMore;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;
- (void)_continue;
- (void)showNavigationBarSpinner:(BOOL)a0;
- (void)handleNextStep;
- (void)_performActionForBlock:(id /* block */)a0;
- (void)_performLearnMoreAction;
- (void)_performDoneAction:(BOOL)a0;
- (void)_bodyButtonAction;
- (id)currentPage;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleNextViewController:(id)a0 displayableError:(id)a1;
- (void)_auxiliary;
- (void)_cancel;

@end
