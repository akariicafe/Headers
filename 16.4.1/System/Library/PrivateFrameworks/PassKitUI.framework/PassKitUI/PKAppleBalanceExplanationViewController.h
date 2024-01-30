@class PKAppleBalanceSetupFlowController;

@interface PKAppleBalanceExplanationViewController : PKExplanationViewController {
    PKAppleBalanceSetupFlowController *_setupController;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_titleText;
- (id)_bodyText;
- (id)_primaryActionTitle;
- (void)_presentError:(id)a0;
- (void)_presentNextViewController;
- (void)_showSpinner:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithSetupFlowController:(id)a0;

@end
