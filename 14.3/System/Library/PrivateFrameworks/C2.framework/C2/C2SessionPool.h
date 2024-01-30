@class NSMapTable, NSMutableDictionary, C2SessionTLSCache, NSString, NSObject, C2RoutingTable;
@protocol OS_dispatch_queue;

@interface C2SessionPool : NSObject <C2SessionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDelegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionCreation_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cleanUp_queue;
@property (nonatomic) BOOL cleanUp_running;
@property (retain, nonatomic) C2RoutingTable *routingTable;
@property (retain, nonatomic) C2SessionTLSCache *sessionTLSCache;
@property (retain, nonatomic) NSMapTable *useCountByObject;
@property (retain, nonatomic) NSMutableDictionary *sessionGroupForSessionConfigurationName;
@property (nonatomic) BOOL testBehavior_disableAutomaticCleanup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (void)C2Session:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)C2Session:(id)a0 originalHost:(id)a1 updatedRoute:(id)a2;
- (id)createDataTaskWithRequestIdentifer:(id)a0 request:(id)a1 options:(id)a2 delegate:(id)a3 sessionHandle:(id *)a4;
- (void)_unsafe_willCreate:(id)a0;
- (BOOL)_unsafe_isCreating:(id)a0;
- (void)_unsafe_didCreate:(id)a0;
- (void)_unsafe_removeSessionGroupIfEmpty:(id)a0;
- (void)ensureCleanUpRunning;
- (void)_unsafe_removeSession:(id)a0;
- (BOOL)_cleanUp_job;
- (void)_cleanUp_schedule;
- (BOOL)testBehavior_cleanUp;

@end
