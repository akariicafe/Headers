@class NSURLSession, NSString, NSMutableDictionary, NSURLSessionConfiguration, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface __NSURLSessionLocal : NSURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal, NSURLSessionDataDelegate_Internal, NSURLSessionSubclass, __NSURLSessionTaskGroupForConfiguration> {
    unsigned long long _identSeed;
    struct XTubeManager { void /* function */ **x0; struct __CFAllocator *x1; int x2; struct RetainableTypedDict<const CoreSchedulingSet *, GlueTubeManager *> { void /* function */ **x0; struct __CFDictionary *x1; } x3; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x4; struct HTTPConnectionCacheLimits { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } x5; struct shared_ptr<NSObject<OS_nw_context> > { id x0; struct __shared_weak_count *x1; } x6; } *_tubeManager;
    NSMutableDictionary *_connectionsToTasks;
    NSMutableArray *_outstandingTasks;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    id /* block */ _invalidateCallback;
    const struct XCookieStorage { void /* function */ **x0; struct __CFAllocator *x1; int x2; } *_xCookies;
    const struct XCredentialStorage { void /* function */ **x0; struct __CFAllocator *x1; int x2; } *_xCreds;
    BOOL _xCookiesInitComplete;
    BOOL _xCredsInitComplete;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _xCookieStorageInitLock;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _xCredStorageInitLock;
    BOOL _isInvalid;
    NSURLSessionConfiguration *_proxyConfig;
    NSURLSession *_proxySession;
    NSMutableDictionary *_proxyDelegates;
    BOOL _shouldRecreateProxySession;
    NSURLSession *_sessionForCacheLookups;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly, weak) NSURLSession *_groupSession;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)_URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (id)webSocketTaskForURL:(id)a0 protocols:(id)a1;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)webSocketTaskForRequest:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_onqueue_getTasksWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2 delegateDispatchQueue:(id)a3;
- (void)_onqueue_resetStorageWithCompletionHandler:(id /* block */)a0;
- (void)_useTLSSessionCacheFromSession:(id)a0;
- (id)AVAssetDownloadTaskForURLAsset:(id)a0 destinationURL:(id)a1 options:(id)a2;
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)a0 mediaSelections:(id)a1 assetTitle:(id)a2 assetArtworkData:(id)a3 options:(id)a4;
- (id).cxx_construct;
- (unsigned long long)nextSeed;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_URLSession:(id)a0 companionAvailabilityChanged:(BOOL)a1;
- (id)_downloadTaskWithTaskForClass:(id)a0;
- (id)_AVAssetDownloadTaskForURL:(id)a0 destinationURL:(id)a1 options:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 _isWaitingForConnectionWithReason:(long long)a2;
- (id)AVAssetDownloadTaskForURLAsset:(id)a0 assetTitle:(id)a1 assetArtworkData:(id)a2 options:(id)a3;
- (void)_URLSession:(id)a0 task:(id)a1 getAuthHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)_dataTaskWithTaskForClass:(id)a0;
- (void)_onqueue_completeInvalidation:(BOOL)a0;
- (id)_uploadTaskWithTaskForClass:(id)a0;
- (void)_onqueue_flushWithCompletionHandler:(id /* block */)a0;

@end
