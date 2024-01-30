@class NSLock, NSMutableArray, ICScheme;

@interface ICManager : NSObject <WFApplicationStateObserver>

@property (retain, nonatomic) NSMutableArray *queuedRequests;
@property (retain, nonatomic) NSLock *queueLock;
@property (nonatomic) BOOL enteringForeground;
@property (nonatomic) BOOL resignedActiveWhileOpeningURL;
@property (retain, nonatomic) ICScheme *callbackScheme;
@property (nonatomic) BOOL allowsOpeningFromBackground;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performRequest:(id)a0;
- (void)_performRequest:(id)a0;
- (void)queueRequest:(id)a0;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 scheme:(id)a2;
- (void)removeHandlerForIncomingRequestsWithAction:(id)a0 scheme:(id)a1;
- (BOOL)handleOpenURL:(id)a0 fromSourceApplication:(id)a1 errorHandler:(id /* block */)a2;
- (BOOL)handleIncomingRequest:(id)a0;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 legacyAction:(id)a2 scheme:(id)a3;
- (id)popQueuedRequest;
- (void)performQueuedRequestIfApplicable;

@end
