@class NSObject, NSString, NSURLResponse, C2NetworkingDelegateURLSession, NSURLRequest;
@protocol NSURLSessionAppleIDContext, OS_dispatch_queue;

@interface C2NetworkingDelegateURLSessionDataTask : NSObject

@property BOOL cancelled;
@property (weak, nonatomic) C2NetworkingDelegateURLSession *session;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property long long state;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLRequest *currentRequest;
@property (copy) NSURLResponse *response;
@property double _timeoutIntervalForResource;
@property (copy, setter=_setAppleIDContext:) id<NSURLSessionAppleIDContext> _appleIDContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long taskIdentifier;
@property (copy) NSString *taskDescription;

- (void)cancel;
- (id)_timingData;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)_drainInputStream:(id)a0 sinkData:(id)a1 completionHandler:(id /* block */)a2;
- (void)streamResponseBody:(id)a0 offset:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)handleCompletion;
- (void)handleResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)processRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupRequestBodyForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupRequest:(id /* block */)a0;

@end
