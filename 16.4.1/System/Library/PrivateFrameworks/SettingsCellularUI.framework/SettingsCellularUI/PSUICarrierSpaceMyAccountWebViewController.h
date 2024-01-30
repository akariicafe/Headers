@class NSURL, WKWebView, UIBarButtonItem;

@interface PSUICarrierSpaceMyAccountWebViewController : UIViewController

@property (retain, nonatomic) NSURL *myAccountURL;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;

- (void)viewDidLoad;
- (id)initWithURLString:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)addCancelButton;
- (void)dismissMyAccount;
- (id)initWithWebView:(id)a0 url:(id)a1;

@end
