@class RBSAssertion, NSString, PETAggregateState, NSMutableDictionary, PETConfig, NSObject, RBSTarget;
@protocol OS_dispatch_queue;

@interface PETEventTracker2 : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _loggingQueueSize;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loggingQueueLock;
    BOOL _inited;
    RBSTarget *_rbsTarget;
    RBSAssertion *_rbsAssertion;
    BOOL _rbsShouldInvalidate;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _rbsAssertionLock;
    BOOL _isDaemon;
}

@property BOOL isAsyncEnabled;
@property (retain) NSString *rootDir;
@property (retain) NSString *logStoresDir;
@property (retain) PETConfig *config;
@property (readonly, nonatomic) PETAggregateState *aggregateState;
@property (retain) NSMutableDictionary *storeCache;

+ (id)sharedInstance;
+ (id)formattedTextForUnaggregatedMessage:(id)a0 messageGroup:(id)a1 config:(id)a2;
+ (double)roundToSigFigs:(double)a0 sigFigs:(unsigned long long)a1;
+ (id)defaultRootDir;
+ (unsigned int)typeIdForMessageName:(id)a0;
+ (id)formattedTextForAggregatedMessage:(id)a0;

- (id)_getLogStore:(id)a0;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)enumerateMessagesWithBlock:(id /* block */)a0 messageGroup:(id)a1 clearStore:(BOOL)a2;
- (void)trackScalarForMessage:(id)a0 count:(int)a1;
- (id)initWithAsyncEnabled:(BOOL)a0;
- (id)_writeMessage:(id)a0;
- (void)enumerateMessageGroups:(id /* block */)a0;
- (double)_roundToSigFigs:(double)a0 forRawMessage:(id)a1;
- (void)_init;
- (void)_logMessage:(id)a0 subGroup:(id)a1;
- (void)logMessage:(id)a0 subGroup:(id)a1;
- (void)clearLogStores;
- (void)_trackScalarForMessage:(id)a0 count:(int)a1 overwrite:(BOOL)a2;
- (void)_dispatchAsyncForLogging:(id /* block */)a0 txnName:(const char *)a1;
- (id)initForTestingWithRootDir:(id)a0;
- (void)trackDistributionForMessage:(id)a0 value:(double)a1;
- (void)_runBlockWithRBSAssertion:(id /* block */)a0;
- (void)trackScalarForMessage:(id)a0;
- (void)_trackDistributionForMessage:(id)a0 value:(double)a1;
- (void)enumerateMessagesWithBlock:(id /* block */)a0 clearStore:(BOOL)a1;
- (id)initWithRootDir:(id)a0 config:(id)a1;
- (void)_initWithRootDir:(id)a0 config:(id)a1;
- (void)enumerateAggregatedMessagesWithBlock:(id /* block */)a0 clearStore:(BOOL)a1;
- (void)trackScalarForMessage:(id)a0 updateCount:(int)a1;

@end
