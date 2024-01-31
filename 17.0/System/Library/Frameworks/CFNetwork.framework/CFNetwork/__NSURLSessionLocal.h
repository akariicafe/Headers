@class NSURLSession, NSString, NSHashTable, NSURLSessionConfiguration, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface __NSURLSessionLocal : NSURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal, NSURLSessionSubclass, __NSURLSessionTaskGroupForConfiguration> {
    unsigned long long _identSeed;
    void *_tubeManager;
    NSMutableArray *_outstandingTasks;
    NSHashTable *_unownedUnresumedTasks;
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
    BOOL _shouldRecreateProxySession;
    NSURLSession *_sessionForCacheLookups;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unownedUnresumedTasksLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly, weak) NSURLSession *_groupSession;

- (id)webSocketTaskForRequest:(id)a0;
- (id)webSocketTaskForURL:(id)a0 protocols:(id)a1;
- (id)AVAssetDownloadTaskForURLAsset:(id)a0 assetTitle:(id)a1 assetArtworkData:(id)a2 options:(id)a3 downloadConfiguration:(id)a4;
- (id)_AVAssetDownloadTaskForURL:(id)a0 destinationURL:(id)a1 options:(id)a2;
- (id)_dataTaskWithTaskForClass:(id)a0;
- (id)_uploadTaskWithTaskForClass:(id)a0;
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)a0 mediaSelections:(id)a1 assetTitle:(id)a2 assetArtworkData:(id)a3 options:(id)a4;
- (void)_useTLSSessionCacheFromSession:(id)a0;
- (void)_onqueue_flushWithCompletionHandler:(id /* block */)a0;
- (void)_onqueue_getTasksWithCompletionHandler:(id /* block */)a0;
- (id)AVAssetDownloadTaskForURLAsset:(id)a0 destinationURL:(id)a1 options:(id)a2;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2 delegateDispatchQueue:(id)a3;
- (void)_onqueue_completeInvalidation:(BOOL)a0;
- (id)_downloadTaskWithTaskForClass:(id)a0;
- (void)dealloc;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (unsigned long long)nextSeed;
- (id).cxx_construct;
- (void)_onqueue_resetStorageWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
