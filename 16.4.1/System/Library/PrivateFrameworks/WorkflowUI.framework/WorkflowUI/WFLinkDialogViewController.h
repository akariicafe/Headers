@class UIViewController, WFLinkSnippetDialogRequest;

@interface WFLinkDialogViewController : WFCompactDialogViewController

@property (retain, nonatomic) UIViewController *snippetViewController;
@property (readonly, nonatomic) WFLinkSnippetDialogRequest *request;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (id)snippetInteractedResponseWithURL:(id)a0;

@end
