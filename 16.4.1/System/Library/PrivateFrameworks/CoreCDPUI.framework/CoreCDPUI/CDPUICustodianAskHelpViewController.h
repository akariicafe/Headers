@class CDPUICustodianAskHelpViewModel;

@interface CDPUICustodianAskHelpViewController : OBWelcomeController {
    CDPUICustodianAskHelpViewModel *_viewModel;
}

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_handleAskForHelpNowAction:(id)a0;
- (void)_handleDontAskForHelpAction:(id)a0;

@end
