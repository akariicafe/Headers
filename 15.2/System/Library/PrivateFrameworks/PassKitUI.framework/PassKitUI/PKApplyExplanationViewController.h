@class PKApplyController, NSString, PKBusinessChatController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyExplanationViewController : PKDynamicProvisioningPageViewController <PKApplyFlowControllerProtocol> {
    BOOL _isLoading;
    PKBusinessChatController *_businessChatController;
}

@property (retain, nonatomic) PKApplyController *controller;
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
- (void)viewDidLoad;
- (id)currentPage;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_auxiliary;
- (void)viewDidAppear:(BOOL)a0;
- (void)_learnMore;
- (void)showNavigationBarSpinner:(BOOL)a0;
- (void)handleNextViewController:(id)a0 displayableError:(id)a1;
- (void)_continue;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;
- (void)terminateSetupFlow;
- (void)_featureApplicationUpdated;
- (void)handleNextStep;
- (id)analyticsAdditionalValues;
- (id)analyticsPageTag;
- (void)_analyticsReportButtonTap:(id)a0;
- (void)_performActionForBlock:(id /* block */)a0;
- (void)_presentInvitationContactSupport;
- (void)_performLearnMoreAction;
- (void)_performDoneAction:(BOOL)a0;
- (void)_bodyButtonAction;
- (void)_presentTermsWithIdentifier:(id)a0;

@end
