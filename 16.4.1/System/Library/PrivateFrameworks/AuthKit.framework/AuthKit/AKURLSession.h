@class NSURLSession, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_tasksByIdentifier;
}

@property (nonatomic) BOOL _usesAppleIDContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedURLSessionWithDenyVirtualInterfaces;
+ (id)_urlBagCache;
+ (id)sharedCacheEnabledURLSession;
+ (id)sharedAnisetteFreeURLSession;
+ (id)_createURLSessionUsesAppleIDContext:(BOOL)a0;
+ (id)sharedCacheEnabledAnisetteFreeSession;
+ (void)removeAllCachedResponses;
+ (id)sharedCacheReliantAnisetteFreeSession;
+ (id)sharedURLSession;

- (void)cancelDataTask:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (BOOL)_unsafe_retryTaskIfPossible:(id)a0;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)_URLSession;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)beginDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRecoverableError:(id)a0;
- (id)init;
- (id)defaultSessionObjectWithConfiguration:(id)a0;
- (void)_unsafe_completeTask:(id)a0 withError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)beginAuthenticationDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
