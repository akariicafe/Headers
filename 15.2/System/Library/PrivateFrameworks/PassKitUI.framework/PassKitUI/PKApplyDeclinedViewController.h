@class PKBusinessChatController;

@interface PKApplyDeclinedViewController : PKApplyExplanationViewController {
    PKBusinessChatController *_businessChatController;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;

@end
