@class NSString, LoadingIndicatorViewController, WKWebView, UIView;
@protocol CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate;

@interface CTCarrierSpaceUIPlanPurchaseWebViewController : UIViewController <WKScriptMessageHandler, WKNavigationDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) LoadingIndicatorViewController *loadingViewController;
@property (weak, nonatomic) id<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadRequest:(id)a0;
- (void)_accountUpdatedWithStatus:(id)a0;
- (void)_swapOutLoadingView;
- (void)loadFileURL:(id)a0;

@end
