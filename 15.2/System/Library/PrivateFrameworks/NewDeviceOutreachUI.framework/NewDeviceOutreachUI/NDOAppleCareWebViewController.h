@class NSString, UIActivityIndicatorView, WKWebView, NDOWarranty, UINavigationItem, UINavigationBar;
@protocol NDOAppleCareWebViewPresenterProtocol;

@interface NDOAppleCareWebViewController : UIViewController <UINavigationBarDelegate, WKNavigationDelegate>

@property (retain) NDOWarranty *warranty;
@property (retain) NSString *serialNumber;
@property (retain) NSString *params;
@property (weak) WKWebView *webview;
@property (weak) UINavigationBar *headerView;
@property (retain) UINavigationItem *webViewNavigationItem;
@property (weak, nonatomic) UIActivityIndicatorView *spinner;
@property BOOL initialLoadCompleted;
@property int retriesRemaining;
@property (weak) id<NDOAppleCareWebViewPresenterProtocol> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidLoad;
- (void)setIsLoading:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (BOOL)navigationBar:(id)a0 shouldPopItem:(id)a1;
- (void)cancelTapped:(id)a0;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1 params:(id)a2;
- (void)loadWebview:(BOOL)a0;

@end
