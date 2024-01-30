@class NSURLSession, NSString, NSMutableDictionary, NSMutableSet, NSOperationQueue, C2RequestOptions;
@protocol C2SessionDelegate;

@interface C2Session : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, C2RequestDelegate, C2SessionTaskDelegate>

@property (retain, nonatomic) NSString *originalHost;
@property (retain, nonatomic) NSString *routeHost;
@property (nonatomic) double routeLastUpdated;
@property (retain, nonatomic) NSMutableSet *didCompleteWithErrorRunningTasks;
@property (nonatomic) BOOL isComplete;
@property (retain, nonatomic) id<C2SessionDelegate> sessionDelegate;
@property (nonatomic) long long emptyTimestamp;
@property (readonly, nonatomic) NSMutableDictionary *wrappedTaskByTaskDescription;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ testBehavior_sessionInvalidated_cfnetwork;
@property (copy, nonatomic) id /* block */ testBehavior_sessionInvalidated_shouldInvalidate;
@property (copy, nonatomic) id /* block */ testBehavior_cleanupRetainCycle;
@property (copy, nonatomic) id /* block */ testBehavior_callbackHung;
@property (readonly, nonatomic) NSString *sessionConfigurationName;
@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, copy, nonatomic) C2RequestOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)portFromURL:(id)a0;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)removeTask:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)invalidateAndCancel;
- (id)initWithSessionConfigurationName:(id)a0 routeHost:(id)a1 options:(id)a2 sessionDelegate:(id)a3;
- (void)C2Session:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)C2Session:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)testBehavior_triggerCallbackHang;
- (void)_recalculateSessionDelegateQueuePriority;
- (void)cleanupRetainCycle;
- (void)sessionTaskDelegateCallbackHelper:(id)a0 task:(id)a1 block:(id /* block */)a2;
- (void)C2Session:(id)a0 sessionTask:(id)a1 updatedRoute:(id)a2;
- (id)createTaskWithOptions:(id)a0 delegate:(id)a1;
- (id)addTask:(id)a0 withDescription:(id)a1 request:(id)a2;
- (BOOL)shouldInvalidateAndCancel;
- (void)testBehavior_triggerSessionExpiry;

@end
