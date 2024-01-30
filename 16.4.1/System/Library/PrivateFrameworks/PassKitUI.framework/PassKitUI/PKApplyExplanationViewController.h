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
@property (copy, nonatomic) id /* block */ doneButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)currentPage;
- (void).cxx_destruct;
- (void)_done;
- (void)_auxiliary;
- (void)_learnMore;
- (id)analyticsPageTag;
- (void)_analyticsReportButtonTap:(id)a0;
- (void)_bodyButtonAction;
- (void)_continue;
- (void)_featureApplicationUpdated;
- (void)_linkAction:(id)a0;
- (void)_performActionForBlock:(id /* block */)a0;
- (void)_performDoneAction:(BOOL)a0;
- (void)_performLearnMoreAction;
- (void)_presentInvitationContactSupport;
- (void)_presentTermsWithIdentifier:(id)a0;
- (id)analyticsAdditionalValues;
- (void)handleNextStep;
- (void)handleNextViewController:(id)a0 displayableError:(id)a1;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;
- (void)showNavigationBarSpinner:(BOOL)a0;
- (void)terminateSetupFlow;

@end
