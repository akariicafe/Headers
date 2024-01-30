@class NSURLSession, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    BOOL _requiresSigning;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_pendingSessionOperations;
}

@property (class, readonly, nonatomic) AAURLSession *sharedSigningSession;
@property (class, readonly, nonatomic) AAURLSession *sharedSession;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initRequiringSigning:(BOOL)a0;
- (id)_enqueueRequest:(id)a0 completion:(id /* block */)a1;
- (void)_sessionQueue_enqueueTask:(id)a0 completion:(id /* block */)a1;
- (void)_sessionQueue_updateTask:(id)a0 withData:(id)a1;
- (void)_sessionQueue_dequeueTask:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void)resetSessionCache;
- (id)bodyTaskWithURL:(id)a0 completion:(id /* block */)a1;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)dataTaskWithURL:(id)a0 completion:(id /* block */)a1;
- (id)bodyTaskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initForProxiedDevice:(id)a0;
- (id)dataTaskWithRequest:(id)a0 completion:(id /* block */)a1;

@end
