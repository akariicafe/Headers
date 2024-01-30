@class EFQueue, WKProcessPool, EMRemoteContentURLSession, NSString, EMRemoteContentURLSchemeHandler, NSObject;
@protocol OS_os_log;

@interface MFWKWebViewFactory : NSObject <EFLoggable> {
    EMRemoteContentURLSchemeHandler *_proxySchemeHandler;
    EMRemoteContentURLSchemeHandler *_noProxySchemeHandler;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EFQueue *preallocatedWebViews;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWebViewFactory;
+ (void)setDaemonInterface:(id)a0 URLCacheWithMemoryCapacity:(unsigned long long)a1;

- (id)webView;
- (void)_didReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_instantiateWebView;
- (void)preallocateWebViews;
- (void)preallocateWebViewIfNeeded;

@end
