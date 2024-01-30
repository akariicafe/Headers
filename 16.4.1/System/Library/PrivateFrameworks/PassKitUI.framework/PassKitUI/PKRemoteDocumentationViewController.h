@class NSString, UIActivityIndicatorView, NSURL, WKWebView, UIBarButtonItem;

@interface PKRemoteDocumentationViewController : UIViewController <WKNavigationDelegate>

@property (nonatomic) long long context;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIBarButtonItem *dismissButton;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)dismiss;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)handleDismiss:(id)a0;
- (long long)handleNavigationAction:(id)a0;
- (id)initWithContext:(long long)a0 URL:(id)a1;
- (BOOL)isWithinBuddy;
- (void)loadContent;
- (void)navigation:(id)a0 didFinishWithError:(id)a1;
- (void)openURLInSafari:(id)a0;
- (void)presentFatalErrorAlert;
- (void)setupActivityIndicatorView;
- (void)setupDismissButton;
- (void)setupWebView;

@end
