@class WLContext, WLWelcomeController;

@interface WLTransferCancellationViewController : WLOnboardingViewController {
    WLWelcomeController *_welcomeController;
    WLContext *_context;
}

@property (copy, nonatomic) id /* block */ resetBlock;

- (void)_reset;
- (void).cxx_destruct;
- (void)_detailTapped:(id)a0;
- (id)initWithWelcomeController:(id)a0 context:(id)a1;

@end
