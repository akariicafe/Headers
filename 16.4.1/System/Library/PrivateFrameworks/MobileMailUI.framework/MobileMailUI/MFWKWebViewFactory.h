@class NSHashTable, NSString, EMRemoteContentURLSession, EMRemoteContentURLSchemeHandler, WKProcessPool, EFAutoCancelationToken, EFQueue, NSObject;
@protocol OS_os_log;

@interface MFWKWebViewFactory : NSObject <EFLoggable, MEContentRuleListManagerObserver> {
    EMRemoteContentURLSchemeHandler *_proxySchemeHandler;
    EMRemoteContentURLSchemeHandler *_noProxySchemeHandler;
    EFAutoCancelationToken *_contentRuleListManagerObserverCancelable;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSHashTable *configurations;
@property (retain, nonatomic) EFQueue *preallocatedWebViews;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWebViewFactory;
+ (void)setDaemonInterface:(id)a0 URLCacheWithMemoryCapacity:(unsigned long long)a1;
+ (id)sharedWebViewFactoryFuture;

- (id)webView;
- (void)_didReceiveMemoryWarning:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)contentRuleListManager:(id)a0 didAddRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didRemoveRuleList:(id)a1;
- (void)contentRuleListManager:(id)a0 didUpdateContentRuleList:(id)a1 oldContentRuleList:(id)a2;
- (id)_createConfiguration;
- (id)_instantiateWebView;
- (id)initWithRemoteContentURLCache:(id)a0;
- (void)preallocateWebViewIfNeeded;
- (void)preallocateWebViews;
- (void)setContentRuleListManager:(id)a0;

@end
