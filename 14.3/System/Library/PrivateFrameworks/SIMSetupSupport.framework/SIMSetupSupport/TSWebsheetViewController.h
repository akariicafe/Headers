@class _SFFormAutoFillController, NSString, WKProcessPool, WKWebView, UIView, NSURLRequest, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate;

@interface TSWebsheetViewController : UIViewController <SFFormAutoFillControllerDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate, _WKInputDelegate, TSSetupFlowItem> {
    WKProcessPool *_processPool;
    WKWebView *_webView;
    UIView *_contentView;
    UIBarButtonItem *_cancelButton;
    NSString *_currentTitle;
    NSURLRequest *_request;
    BOOL _didFinishDocumentLoad;
    BOOL _didFirstLayout;
    BOOL _didLoadLoadingView;
    _SFFormAutoFillController *_autoFillController;
    BOOL _isRemotePlan;
}

@property (nonatomic) BOOL loadFailure;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (weak) id<TSEntitlementJSHandlerDelegate> callbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)sendRequest:(id)a0;
- (void).cxx_destruct;
- (id)_processPool;
- (void)_webView:(id)a0 accessoryViewCustomButtonTappedInFormInputSession:(id)a1;
- (void)_webView:(id)a0 insertTextSuggestion:(id)a1 inInputSession:(id)a2;
- (void)_webView:(id)a0 didStartInputSession:(id)a1;
- (void)_webView:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)loadView;
- (void)_webView:(id)a0 navigationDidFinishDocumentLoad:(id)a1;
- (void)_cancelButtonTapped;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)formAutoFillControllerURLForFormAutoFill:(id)a0;
- (BOOL)formAutoFillControllerCanPrefillForm:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadRequest:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)_webView:(id)a0 willSubmitFormValues:(id)a1 userObject:(id)a2 submissionHandler:(id /* block */)a3;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)_showCancelButton:(BOOL)a0;
- (id)_webViewConfigurationWithProcessPool:(id)a0;
- (void)_showLoadingPage;
- (void)_handlePlanPurchaseWithMessageBody:(id)a0;
- (void)_handleTransferWithMessageBody:(id)a0;
- (void)_showVerifyingIndicator:(BOOL)a0;
- (BOOL)_currentLanguageIsRTL;
- (BOOL)_isHexadecimalString:(id)a0;
- (id)initForRemotePlan:(BOOL)a0;
- (BOOL)formAutoFillControllerShouldDisableAutoFill:(id)a0;

@end
