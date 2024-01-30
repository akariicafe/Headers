@class NSURLSession, NSString, AVAssetResourceLoaderInternal, NSOperationQueue, NSObject;
@protocol NSURLSessionDataDelegate, AVAssetResourceLoaderDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {
    AVAssetResourceLoaderInternal *_resourceLoader;
}

@property (nonatomic) BOOL preloadsEligibleContentKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSURLSessionDataDelegate> URLSessionDataDelegate;
@property (readonly, nonatomic) NSOperationQueue *URLSessionDataDelegateQueue;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (readonly, weak, nonatomic) id<AVAssetResourceLoaderDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)stateQueue;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)cancelLoading;
- (void)_performDelegateSelector:(SEL)a0 withObject:(id)a1 representingNewRequest:(BOOL)a2 key:(id)a3 fallbackHandler:(id /* block */)a4;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)_poseAuthenticationChallengeWithKey:(id)a0 challenge:(id)a1 fallbackHandler:(id /* block */)a2;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)_setContentKeySessionCustomURLHandler:(struct OpaqueFigCustomURLHandler { } *)a0;
- (struct OpaqueFigCustomURLHandler { } *)_authHandler;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)a0 delegateCallbackBlock:(id /* block */)a1;
- (void)_noteFinishingOfRequest:(id)a0;
- (void)_poseAuthenticationChallengeWithRequestInfo:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1 challenge:(id)a2;
- (void)_setDelegateOnStateQueue:(id)a0;
- (id)_getDelegateOnStateQueue;
- (void)dealloc;
- (id)initWithURLRequestHelper:(id)a0 asset:(id)a1;
- (id)initWithURLRequestHelper:(id)a0 asset:(id)a1 remoteCustomURLHandlerContext:(id)a2;
- (void)_handleRequest:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1 willHandleRequest:(BOOL *)a2;
- (id)remoteCustomURLHandlerContextForPID:(int)a0;
- (struct OpaqueFigCustomURLLoader { } *)_customURLLoader;
- (struct OpaqueFigCustomURLHandler { } *)_customURLHandler;
- (id)URLRequestHelper;
- (void)_issueLoadingRequestWithKey:(id)a0 loadingRequest:(id)a1 isRenewalRequest:(BOOL)a2 fallbackHandler:(id /* block */)a3;
- (id)init;
- (void)cacheContentInformation:(id)a0 forURL:(id)a1;
- (id)cachedContentInformationForURL:(id)a0;
- (void)_cancelRequest:(struct __CFDictionary { } *)a0 requestID:(unsigned long long)a1;
- (void)_sendAuthResponseForChallenge:(id)a0 disposition:(long long)a1 credential:(id)a2 error:(id)a3;
- (id)asset;
- (struct OpaqueFigCustomURLHandler { } *)_contentKeySessionCustomURLHandler;
- (void)_cancelRequestWithKey:(id)a0 fallbackHandler:(id /* block */)a1;

@end
