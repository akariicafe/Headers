@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController

- (void)viewDidLoad;
- (BOOL)shouldEmbedContentTrayIfNeeded;
- (void)_addTitleToContext:(id)a0;
- (void)_addPrivacyLinkToContext:(id)a0;
- (void)_addContinueButtonToContext:(id)a0 title:(id)a1;
- (void)_continueButtonSelected:(id)a0;

@end
