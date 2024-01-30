@class HMFHTTPClientConfiguration, NSString, HMFTimer, NSURLSession, NSURL, NSOperationQueue, HMFNetManager, NSObject, HMFNetService, HMFNetMonitor;
@protocol HMFHTTPClientDelegate, OS_dispatch_queue;

@interface HMFHTTPClient : HMFObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSURLSession *session;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) HMFNetMonitor *reachabilityMonitor;
@property (readonly, nonatomic) NSOperationQueue *reachabilityProbeQueue;
@property (readonly, nonatomic) HMFNetManager *netManager;
@property (retain, nonatomic) HMFTimer *delegatedPingTimer;
@property (nonatomic, getter=isPinging) BOOL pinging;
@property (nonatomic, getter=isReachable) BOOL reachable;
@property (copy) id /* block */ timerFactory;
@property (weak) id<HMFHTTPClientDelegate> delegate;
@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, copy, nonatomic) HMFNetService *netService;
@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) BOOL allowAnonymousConnection;
@property (readonly, copy) HMFHTTPClientConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)baseURLWithScheme:(id)a0 hostAddress:(id)a1 port:(unsigned long long)a2;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (id)init;
- (id)attributeDescriptions;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendRequest:(id)a0 baseURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelPendingRequests;
- (id)createNSURLSession:(id)a0;
- (void)finishCommonInitialization;
- (id)initWithBaseURL:(id)a0 configuration:(id)a1;
- (id)initWithBaseURL:(id)a0 configuration:(id)a1 netManager:(id)a2;
- (id)initWithBaseURL:(id)a0 configuration:(id)a1 session:(id)a2 reachabilityMonitor:(id)a3 netManager:(id)a4;
- (id)initWithBaseURL:(id)a0 options:(unsigned long long)a1;
- (id)initWithNetService:(id)a0 options:(unsigned long long)a1;
- (id)initWithService:(id)a0 configuration:(id)a1;
- (id)initWithService:(id)a0 configuration:(id)a1 netManager:(id)a2;
- (id)initWithService:(id)a0 configuration:(id)a1 session:(id)a2 reachabilityMonitor:(id)a3 netManager:(id)a4;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (BOOL)requestClientReachabilityPingWithRetry:(BOOL)a0;
- (void)resolveWithCompletionHandler:(id /* block */)a0;
- (void)startDelegatedPingTimer;
- (void)startReachabilityProbe;
- (void)stopDelegatedPingTimer;

@end
