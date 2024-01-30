@class NSString, NSURLResponse, WebCoreNSURLSession, NSError, NSURLRequest;

@interface WebCoreNSURLSessionDataTask : NSObject {
    struct WeakObjCPtr<WebCoreNSURLSession> { id m_weakReference; } _session;
    struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> { struct PlatformMediaResource *m_ptr; } _resource;
    struct RetainPtr<NSURLResponse> { void *m_ptr; } _response;
    struct RetainPtr<NSURLRequest> { void *m_ptr; } _originalRequest;
    struct RetainPtr<NSURLRequest> { void *m_ptr; } _currentRequest;
    struct RetainPtr<NSError> { void *m_ptr; } _error;
    struct RetainPtr<NSString> { void *m_ptr; } _taskDescription;
}

@property WebCoreNSURLSession *session;
@property unsigned long long taskIdentifier;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLResponse *response;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property long long state;
@property (readonly, copy) NSError *error;
@property (copy) NSString *taskDescription;
@property float priority;

- (void)_cancel;
- (id).cxx_construct;
- (id)_timingData;
- (void)suspend;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)_resource:(void *)a0 loadFinishedWithError:(id)a1 metrics:(const void *)a2;
- (void)_restart;
- (id)initWithSession:(id)a0 identifier:(unsigned long long)a1 request:(id)a2;
- (void)resource:(void *)a0 accessControlCheckFailedWithError:(const void *)a1;
- (void)resource:(void *)a0 loadFailedWithError:(const void *)a1;
- (void)resource:(void *)a0 receivedData:(void *)a1;
- (void)resource:(void *)a0 receivedRedirect:(const void *)a1 request:(void *)a2 completionHandler:(void *)a3;
- (void)resource:(void *)a0 receivedResponse:(const void *)a1 completionHandler:(void *)a2;
- (void)resource:(void *)a0 sentBytes:(unsigned long long)a1 totalBytesToBeSent:(unsigned long long)a2;
- (BOOL)resource:(void *)a0 shouldCacheResponse:(const void *)a1;
- (void)resourceFinished:(void *)a0 metrics:(const void *)a1;

@end
