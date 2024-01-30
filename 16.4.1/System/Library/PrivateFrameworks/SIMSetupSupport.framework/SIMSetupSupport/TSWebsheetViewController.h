@class _SFFormAutoFillController, NSString, WKUserContentController, WKWebView, UIViewController, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate;

@interface TSWebsheetViewController : SSUIViewController <UIScrollViewDelegate, SFFormAutoFillControllerDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate, _WKInputDelegate, TSSetupFlowItem> {
    UIBarButtonItem *_cancelButton;
    BOOL _didFinishDocumentLoad;
    BOOL _didFirstLayout;
    BOOL _didReceivePurchaseCallback;
    BOOL _isRemotePlan;
    BOOL _didViewAppear;
    _SFFormAutoFillController *_autoFillController;
    WKWebView *_webView;
    WKUserContentController *_wkUserContentController;
    NSString *_currentTitle;
    UIViewController *_viewController;
    id /* block */ _requestLoadedCompletion;
}

@property (nonatomic) long long dismissCause;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (weak) id<TSEntitlementJSHandlerDelegate> callbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)_webView:(id)a0 willStartInputSession:(id)a1;
- (void)_webView:(id)a0 navigationDidFinishDocumentLoad:(id)a1;
- (void)_webView:(id)a0 accessoryViewCustomButtonTappedInFormInputSession:(id)a1;
- (void)sendRequest:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)formAutoFillControllerCanPrefillForm:(id)a0;
- (id)formAutoFillControllerURLForFormAutoFill:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_webView:(id)a0 willSubmitFormValues:(id)a1 userObject:(id)a2 submissionHandler:(id /* block */)a3;
- (void)_webView:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_webView:(id)a0 insertTextSuggestion:(id)a1 inInputSession:(id)a2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_processPool;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)_doneButtonTapped;
- (void)loadRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleTransferWithMessageBody:(id)a0;
- (BOOL)_currentLanguageIsRTL;
- (void)_handlePlanPurchaseWithMessageBody:(id)a0;
- (BOOL)_isHexadecimalString:(id)a0;
- (BOOL)_isProfilePendingRelease:(id)a0;
- (BOOL)_shouldIgnoreWebviewError:(id)a0;
- (void)_showCancelButton:(BOOL)a0;
- (void)_showVerifyingIndicator:(BOOL)a0;
- (void)_transferESimInstallationStarted;
- (id)_webViewConfigurationWithProcessPool:(id)a0;
- (BOOL)formAutoFillControllerShouldDisableAutoFill:(id)a0;
- (id)initForRemotePlan:(BOOL)a0 carrierName:(id)a1;
- (id)initForRemotePlan:(BOOL)a0 carrierName:(id)a1 viewController:(id)a2;

@end
