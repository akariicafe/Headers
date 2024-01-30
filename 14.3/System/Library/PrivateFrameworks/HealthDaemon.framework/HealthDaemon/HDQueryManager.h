@class NSMutableArray, NSString, NSMutableDictionary, NSObject, HDDaemon;
@protocol OS_dispatch_queue, HDQueryManagerUnitTestDelegate;

@interface HDQueryManager : NSObject <HDProcessStateObserver, HDDiagnosticObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryCollectionsByProcessBundleIdentifier;
    NSMutableArray *_pendingDatabaseAccessBlocks;
    NSMutableArray *_executingDatabaseAccessBlocks;
    long long _countOfExecutingThrottledDatabaseAccessBlocks;
    long long _unitTest_suspendCount;
}

@property (retain) NSObject<OS_dispatch_queue> *unitTest_delegateQueue;
@property (weak) id<HDQueryManagerUnitTestDelegate> unitTest_delegate;
@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_lock_handleClientStateChangeWithQueryCollection:(id)a0;
- (void)_lock_willExecuteDatabaseAccessBlock:(id)a0;
- (id)_lock_dequeueNextDatabaseAccessBlock;
- (void)_performAsyncWithUnitTestDelegate:(id /* block */)a0;
- (id)_lock_foregroundBundleIdentifiers;
- (id)_lock_registerQueryServer:(id)a0 error:(id *)a1;
- (void)logDiagnostics;
- (void).cxx_destruct;
- (BOOL)_lock_canDequeueBlock:(id)a0;
- (void)_lock_executeDatabaseAccessBlocks;
- (void)dealloc;
- (void)_lock_startQueryServer:(id)a0 completion:(id /* block */)a1;
- (void)_lock_unregisterQueryServer:(id)a0;
- (void)unitTest_suspendWithCount:(unsigned long long)a0;
- (id)_lock_registerQueryServer:(id)a0 bundleIdentifier:(id)a1;
- (id)diagnosticDescription;
- (id)_lock_queryCollectionForBundleIdentifier:(id)a0 createIfNecessary:(BOOL)a1;
- (id)initWithDaemon:(id)a0;
- (void)_logQueryActivationWithServer:(id)a0;
- (id)_monitoringIdentifierForProcess:(id)a0;
- (void)_didExecuteDatabaseAccessBlock:(id)a0;
- (void)startQueryServer:(id)a0 completion:(id /* block */)a1;
- (void)processWithBundleIdentifier:(id)a0 didTransitionFromState:(unsigned int)a1 toState:(unsigned int)a2;
- (void)scheduleDatabaseAccessForQueryServer:(id)a0 block:(id /* block */)a1;
- (void)_queryServerDidFinish:(id)a0;

@end
