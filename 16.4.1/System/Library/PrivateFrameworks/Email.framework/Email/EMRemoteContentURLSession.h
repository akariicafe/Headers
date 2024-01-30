@class NSURLSession, NSString, NSDictionary, NSOperationQueue, EFLocked, EMRemoteContentURLCache;

@interface EMRemoteContentURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {
    NSURLSession *_session;
    EFLocked *_activeTasks;
    EFLocked *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionLock;
}

@property (class, readonly, copy, nonatomic) NSDictionary *genericHTTPHeaderFields;

@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, nonatomic) EMRemoteContentURLCache *cache;
@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (id)initWithCache:(id)a0 sourceBundleIdentifier:(id)a1;
- (void)_createURLSession;
- (void)abortTask:(id)a0;
- (id)dataTaskWithRequest:(id)a0 isSynthetic:(BOOL)a1 allowProxying:(BOOL)a2 failOpen:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)dataTaskWithRequest:(id)a0 isSynthetic:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)invalidateAndCancel:(BOOL)a0;

@end
