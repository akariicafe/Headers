@class SL_OOPASpinnerTitle, NSString, UIWebView, NSURL, WKWebView, NSObject;
@protocol SL_OOPAWebViewControllerDelegate, SL_OOPAuthFlowDelegate;

@interface SL_OOPAWebViewController : UIViewController <WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate> {
    WKWebView *_wkWebView;
    UIWebView *_uiWebView;
    SL_OOPASpinnerTitle *_spinnerTitleView;
    struct __CFURLStorageSession { } *_storageSession;
    BOOL _hidingWebView;
    BOOL _didLoadWebView;
    BOOL _didFinish;
}

@property (weak, nonatomic) id<SL_OOPAWebViewControllerDelegate> delegate;
@property (retain, nonatomic) NSObject<SL_OOPAuthFlowDelegate> *authFlowDelegate;
@property (copy, nonatomic) NSURL *authURL;
@property (copy, nonatomic) NSString *navBarTitle;
@property (copy, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_cancelButtonTapped:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidFinishLoad:(id)a0;
- (void)webViewDidStartLoad:(id)a0;
- (void)_didFinishWithSuccess:(BOOL)a0 response:(id)a1 error:(id)a2;
- (void)_evaluateDocumentTitleForUIWebView:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_evaluateDocumentTitleForWebView:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_loadWebView;
- (void)_loadWebViewIfReady;
- (void)_updateNavigationPromptWithActiveURL:(id)a0;

@end
