@class NSString, NSURLSessionTask, NSCachedURLResponse, NSArray, NSURLRequest;

@interface __NSCFURLProxySessionConnection : __NSCFURLSessionConnection <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal> {
    NSURLSessionTask *_proxyTask;
    NSURLSessionTask *_cacheTask;
    BOOL _shouldCancelOnCacheTaskCompletion;
    BOOL _clientWantsCacheOnly;
    BOOL _completedLocalCacheLookup;
    BOOL _requestIsUncacheable;
    BOOL _handledNeedNewBodyStream;
    NSCachedURLResponse *_cachedResponseForConditionalRequest;
    NSURLRequest *_conditionalRequest;
    NSArray *_cachedResponseDataArray;
    NSString *_originalUploadFilePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)setIsDownload:(BOOL)a0;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)suspend;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)resume;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)setPoolPriority:(long long)a0;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)expectedProgressTargetChanged;
- (void)cancel;
- (void)setPriorityHint:(float)a0 incremental:(BOOL)a1;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)a0;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveInformationalResponse:(id)a2;
- (id)initWithTask:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 _didReceiveData:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 _isWaitingForConnectionWithReason:(long long)a2;
- (void)_URLSession:(id)a0 task:(id)a1 getAuthHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;

@end
