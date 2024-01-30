@class NSString, NSTimer, NSArray, NSDictionary, NSMutableArray, NSData;

@interface ACFHTTPTransport : NSObject <ACFHTTPMethodInvocationDelegate, ACFHTTPTransportProtocol>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSMutableArray *inProgressServerInvocations;
@property (retain, nonatomic) NSMutableArray *queuedServerInvocations;
@property (retain, nonatomic) NSTimer *failoverTimer;
@property (nonatomic) unsigned long long tryCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *requestURLTemplate;
@property (retain, nonatomic) NSArray *serverHosts;
@property (retain, nonatomic) NSArray *serverAttemptsDelays;
@property (retain, nonatomic) NSString *httpMethod;
@property (retain, nonatomic) NSDictionary *httpHeader;
@property (retain, nonatomic) NSDictionary *httpGETParameters;
@property (retain, nonatomic) NSData *httpPOSTBody;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ retryCheckBlock;

- (void)cancelRequest;
- (void)didEnd;
- (void)dealloc;
- (void)didStart;
- (void)performRequest;
- (BOOL)hasFinishedServerInvocations;
- (void)cancelAllInvocations;
- (void)unscheduleInvocation:(id)a0;
- (void)scheduleNextQueuedRequest;
- (void)removeFromQueuedServerInvocations:(id)a0;
- (id)requestString:(id)a0;
- (id)urlWithRequest:(id)a0 address:(id)a1;
- (void)scheduleInvocation:(id)a0;
- (void)addToQueuedServerInvocations:(id)a0;
- (void)scheduleTimerForNextAttempt;
- (void)invocation:(id)a0 didFinishWithError:(id)a1 response:(id)a2;
- (void)httpMethodInvocation:(id)a0 didFinishWithResult:(id)a1;
- (void)httpMethodInvocation:(id)a0 didFailWithError:(id)a1;
- (void)performRequestWithCompletionBlock:(id /* block */)a0;

@end
