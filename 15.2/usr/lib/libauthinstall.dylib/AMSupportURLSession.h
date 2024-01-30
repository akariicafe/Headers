@class NSURLSession, NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSupportURLSession : NSObject <NSURLSessionDelegate>

@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeout;
@property (nonatomic) float priority;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSDictionary *options;
@property (readonly) BOOL sslEvalFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithOptions:(id)a0;
- (void)dealloc;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)_newSession;
- (void)sendRequest:(struct __CFHTTPMessage { } *)a0 completion:(id /* block */)a1;
- (id)_defaultSessionConfigurationWithIdentifier:(id)a0;
- (id)_urlRequestForHTTPMessage:(struct __CFHTTPMessage { } *)a0;

@end
