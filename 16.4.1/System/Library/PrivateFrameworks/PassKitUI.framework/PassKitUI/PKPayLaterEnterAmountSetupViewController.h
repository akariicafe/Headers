@class PKPayLaterDynamicContentPage, NSString, PKPayLaterSetupFlowController;

@interface PKPayLaterEnterAmountSetupViewController : PKPayLaterEnterAmountViewController {
    PKPayLaterSetupFlowController *_setupController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    NSString *_minimumString;
    NSString *_maximumString;
    NSString *_pageTag;
}

- (void)willMoveToParentViewController:(id)a0;
- (id)headerTitle;
- (id)headerSubtitle;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_reportViewDidAppear:(BOOL)a0;
- (void)currencyAmountUpdated:(id)a0;
- (id)initWithSetupFlowController:(id)a0;
- (void)nextButtonTapped;
- (BOOL)shouldAllowDecimalInput;

@end
