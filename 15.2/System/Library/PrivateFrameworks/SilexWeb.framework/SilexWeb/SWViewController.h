@class NSString, WKWebView, SWLoader;
@protocol SWSessionManager, SWErrorReporting, SWScriptsManager, SWMessageHandlerManager, SWContentRuleManager, SWNavigationManager, SWSetupManager, SWDatastoreSynchronizationManager, SWReachabilityProvider, SWLogger, SWProcessTerminationManager, SWURLSchemeHandlerManager, SWTimeoutManager, SWDocumentStateReporting;

@interface SWViewController : UIViewController <WKNavigationDelegate, WKUIDelegate, _WKFullscreenDelegate>

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) id<SWSetupManager> setupManager;
@property (readonly, nonatomic) id<SWErrorReporting> errorReporter;
@property (readonly, nonatomic) id<SWDocumentStateReporting> documentStateReporter;
@property (readonly, nonatomic) id<SWTimeoutManager> timeoutManager;
@property (readonly, nonatomic) id<SWProcessTerminationManager> terminationManager;
@property (readonly, nonatomic) id<SWContentRuleManager> contentRuleManager;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (retain, nonatomic) SWLoader *loader;
@property (readonly, nonatomic) id<SWSessionManager> sessionManager;
@property (readonly, nonatomic) id<SWDatastoreSynchronizationManager> datastoreSynchronizationManager;
@property (readonly, nonatomic) id<SWURLSchemeHandlerManager> URLSchemeHandlerManager;
@property (nonatomic) BOOL isWebViewPresentingInFullScreen;
@property (readonly, nonatomic) id<SWScriptsManager> scriptsManager;
@property (readonly, nonatomic) id<SWMessageHandlerManager> messageHandlerManager;
@property (readonly, nonatomic) id<SWNavigationManager> navigationManager;
@property (nonatomic) BOOL allowsRemoteInspection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)_webViewDidExitElementFullscreen:(id)a0;
- (void)loadURL:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_webViewDidEnterElementFullscreen:(id)a0;
- (BOOL)webView:(id)a0 shouldPreviewElement:(id)a1;
- (id)webView:(id)a0 previewingViewControllerForElement:(id)a1 defaultActions:(id)a2;
- (void)webView:(id)a0 commitPreviewingViewController:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)accessibilityElements;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)loadHTMLString:(id)a0 baseURL:(id)a1;
- (id)initWithWebView:(id)a0 setupManager:(id)a1 scriptsManager:(id)a2 messageHandlerManager:(id)a3 navigationManager:(id)a4 errorReporter:(id)a5 documentStateReporter:(id)a6 timeoutManager:(id)a7 terminationManager:(id)a8 contentRuleManager:(id)a9 reachabilityProvider:(id)a10 logger:(id)a11 sessionManager:(id)a12 datastoreSynchronizationManager:(id)a13 URLSchemeHandlerManager:(id)a14;
- (void)initiateLoadingWithLoader:(id)a0;

@end
