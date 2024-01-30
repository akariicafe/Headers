@class PKBusinessChatController;

@interface PKApplyDeclinedViewController : PKApplyExplanationViewController {
    PKBusinessChatController *_businessChatController;
}

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancelAction;
- (void)_continueAction;
- (void)_auxiliaryAction;
- (BOOL)_shouldOfferAddPayLaterPassToWallet;

@end
