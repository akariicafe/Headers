@class NSString, NSURLSession, NSOperationQueue, AKAppleIDSession, AMSURLDelegateProxy, NSObject, AMSURLSecurityPolicy, NSURLSessionConfiguration;
@protocol AMSRequestEncoding, AMSURLHandling, AMSResponseDecoding, AMSURLProtocolDelegate, OS_dispatch_queue, NSURLSessionDelegate;

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (class, readonly, nonatomic) AKAppleIDSession *sharedAuthKitSession;

@property (retain, nonatomic) AMSURLDelegateProxy *delegateProxy;
@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lazyDataTaskCreationQueue;
@property (retain, nonatomic) AMSURLSecurityPolicy *securityPolicy;
@property (readonly, nonatomic) NSURLSessionConfiguration *configuration;
@property (weak, nonatomic) id<NSURLSessionDelegate, AMSURLProtocolDelegate> delegate;
@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (retain, nonatomic) id<AMSURLHandling> protocolHandler;
@property (retain, nonatomic) id<AMSRequestEncoding> requestEncoder;
@property (retain, nonatomic) id<AMSResponseDecoding> responseDecoder;
@property (readonly, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSession;
+ (id)imageSession;

- (void)_completeTask:(id)a0 decodedObject:(id)a1 error:(id)a2;
- (id)dataTaskWithRequest:(id)a0 signpostID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)dataTaskPromiseWithRequest:(id)a0;
- (id)_prepareRequest:(id)a0 properties:(id)a1 error:(id *)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)dataTaskWithRequest:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)dataTaskPromiseWithRequestPromise:(id)a0;
- (id)_formatError:(id)a0 task:(id)a1 decodedObject:(id)a2;
- (void)_retryTask:(id)a0 action:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)_createSharedDataForTask:(id)a0 properties:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_protocolHandlerIsAMSImplementation;
- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)_handleURLAction:(id)a0 task:(id)a1 error:(id *)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
