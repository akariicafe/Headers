@class BCProgressIndicatorView, NSString, WKWebView, BCServerErrorView, NSURL, BCInvalidCertificatView;
@protocol BCWebViewControllerDelegate;

@interface BCWebViewController : UIViewController <WKNavigationDelegate> {
    BOOL _wasCallbackCaptured;
    BCInvalidCertificatView *_invalidCertificatView;
    BCProgressIndicatorView *_progressIndicatorView;
    BCServerErrorView *_serverErrorView;
    NSURL *_originURL;
}

@property (weak, nonatomic) id<BCWebViewControllerDelegate> delegate;
@property (retain, nonatomic) WKWebView *webkitView;
@property (retain, nonatomic) NSString *callbackURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)loadURL:(id)a0;
- (void)reload;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)presentCertificatErrorForHost:(id)a0;
- (id)initWithCallbackURI:(id)a0;

@end
