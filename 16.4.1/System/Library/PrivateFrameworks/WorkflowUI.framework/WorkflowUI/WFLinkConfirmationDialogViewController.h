@interface WFLinkConfirmationDialogViewController : WFLinkDialogViewController

- (void)viewDidLoad;
- (BOOL)allowsInteractiveDismiss;
- (void)finishWithResponseCode:(unsigned long long)a0;
- (id)snippetInteractedResponseWithURL:(id)a0;

@end
