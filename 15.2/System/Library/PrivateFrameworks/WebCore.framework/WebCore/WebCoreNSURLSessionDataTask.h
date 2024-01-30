@class NSString, NSURLResponse, WebCoreNSURLSession, NSError, NSURLRequest;

@interface WebCoreNSURLSessionDataTask : NSObject {
    struct WeakObjCPtr<WebCoreNSURLSession> { id m_weakReference; } _session;
    struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> { struct PlatformMediaResource *m_ptr; } _resource;
    struct RetainPtr<NSURLResponse> { void *m_ptr; } _response;
}

@property WebCoreNSURLSession *session;
@property unsigned long long taskIdentifier;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLResponse *response;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property long long state;
@property (copy) NSError *error;
@property (copy) NSString *taskDescription;
@property float priority;

- (id)_timingData;
- (void)_restart;
- (void).cxx_destruct;
- (void)_cancel;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (void)resource:(void *)a0 receivedResponse:(const void *)a1 completionHandler:(void *)a2;
- (void)cancel;
- (void)resource:(void *)a0 receivedData:(void *)a1;
- (void)resourceFinished:(void *)a0 metrics:(const void *)a1;
- (void)resource:(void *)a0 loadFailedWithError:(const void *)a1;
- (id).cxx_construct;
- (id)initWithSession:(id)a0 identifier:(unsigned long long)a1 request:(id)a2;
- (void)resource:(void *)a0 sentBytes:(unsigned long long)a1 totalBytesToBeSent:(unsigned long long)a2;
- (BOOL)resource:(void *)a0 shouldCacheResponse:(const void *)a1;
- (void)resource:(void *)a0 receivedRedirect:(const void *)a1 request:(void *)a2 completionHandler:(void *)a3;
- (void)resource:(void *)a0 accessControlCheckFailedWithError:(const void *)a1;
- (void)_resource:(void *)a0 loadFinishedWithError:(id)a1 metrics:(const void *)a2;

@end
