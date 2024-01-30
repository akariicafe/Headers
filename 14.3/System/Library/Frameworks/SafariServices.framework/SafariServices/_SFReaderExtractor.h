@class NSString, WKProcessPool, WKWebView, NSURL, _SFReaderController, NSTimer;

@interface _SFReaderExtractor : NSObject <WKNavigationDelegate, _SFReaderControllerDelegate> {
    WKWebView *_webView;
    WKWebView *_readerWebView;
    WKProcessPool *_processPool;
    NSURL *_currentURL;
    _SFReaderController *_readerController;
    NSTimer *_loadingTimeoutTimer;
    NSTimer *_readerExtractionTimer;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_configuration;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)init;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)readerController:(id)a0 didCollectArticleContent:(id)a1;
- (id)_processPool;
- (void)_setUpReaderController;
- (void)_finishWithContent:(id)a0 error:(id)a1;
- (void)_scheduleLoadingTimeout;
- (void)_scheduleReaderDataExtractionTimeout;
- (void)getExtractedDataForURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)getExtractedDataForURL:(id)a0 withData:(id)a1 withCompletion:(id /* block */)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)_invalidateTimers;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;

@end
