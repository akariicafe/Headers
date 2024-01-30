@class EFLocked, NSString, WKWebView, _WKRemoteObjectInterface, NSObject, ECRemoteContentWebViewObserver;
@protocol OS_os_log;

@interface ECRemoteContentParser : NSObject <ECRemoteContentWebViewObserver, EFSignpostable, WKNavigationDelegate> {
    _WKRemoteObjectInterface *_observerInterface;
    ECRemoteContentWebViewObserver *_observer;
    EFLocked *_state;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (void).cxx_destruct;
- (id)init;
- (id)webViewConfiguration;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)baseURL:(id)a0 didRequestRemoteContentURLs:(id)a1;
- (void)setContentRuleLists:(id)a0;
- (id)remoteContentLinksFromHTMLData:(id)a0 cancelationToken:(id)a1 defaultCharsetName:(id)a2;

@end
