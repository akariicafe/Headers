@class NSOperationQueue, NSURLSession, NSString, AKAppleIDSession, AMSURLDelegateProxy, AMSURLSecurityPolicy, NSURLSessionConfiguration;
@protocol AMSURLHandling, AMSResponseDecoding, AMSURLProtocolDelegate, NSURLSessionDelegate, AMSRequestEncoding;

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (class, readonly, nonatomic) AKAppleIDSession *sharedAuthKitSession;

@property (retain, nonatomic) AMSURLDelegateProxy *delegateProxy;
@property (nonatomic) BOOL invalidated;
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

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)_handleURLAction:(id)a0 task:(id)a1 error:(id *)a2;
- (id)dataTaskWithRequest:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)_formatError:(id)a0 task:(id)a1 decodedObject:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)_prepareRequest:(id)a0 properties:(id)a1 error:(id *)a2;
- (id)init;
- (void)finishTasksAndInvalidate;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)dataTaskPromiseWithRequest:(id)a0;
- (void)_retryTask:(id)a0 action:(id)a1 error:(id *)a2;
- (id)dataTaskPromiseWithRequestPromise:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_completeTask:(id)a0 decodedObject:(id)a1 error:(id)a2;
- (void)dealloc;
- (void)invalidateAndCancel;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)_createSharedDataForTask:(id)a0 properties:(id)a1 completionHandler:(id /* block */)a2;

@end
