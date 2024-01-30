@class BCProgressIndicatorView, NSString, NSURL, BCServerErrorView, WKWebView, BCInvalidCertificatView;
@protocol BCWebViewControllerDelegate;

@interface BCWebViewController : UIViewController <WKNavigationDelegate>

@property (retain, nonatomic) BCInvalidCertificatView *invalidCertificatView;
@property (retain, nonatomic) BCProgressIndicatorView *progressIndicatorView;
@property (retain, nonatomic) BCServerErrorView *serverErrorView;
@property (retain, nonatomic) NSURL *originURL;
@property (nonatomic) BOOL wasCallbackCaptured;
@property (weak, nonatomic) id<BCWebViewControllerDelegate> delegate;
@property (retain, nonatomic) WKWebView *webkitView;
@property (retain, nonatomic) NSString *callbackURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (void)setupConstraints;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void).cxx_destruct;
- (void)loadURL:(id)a0;
- (void)loadView;
- (void)setupSubviews;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)setupObservers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)dismissErrorViews;
- (void)setupProgressIndicator;
- (void)removeObservers;
- (BOOL)isCertificatRelatedError:(id)a0;
- (void)presentCertificatErrorForHost:(id)a0;
- (void)presentServerError;
- (id)initWithCallbackURI:(id)a0;
- (void)viewWillDisappear;

@end
