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

- (id)initWithDaemon:(id)a0;
- (id)diagnosticDescription;
- (void)startQueryServer:(id)a0 completion:(id /* block */)a1;
- (void)scheduleDatabaseAccessForQueryServer:(id)a0 block:(id /* block */)a1;
- (void)unitTest_suspendWithCount:(unsigned long long)a0;
- (void)logDiagnostics;
- (void).cxx_destruct;
- (void)dealloc;
- (void)processWithBundleIdentifier:(id)a0 didTransitionFromState:(unsigned int)a1 toState:(unsigned int)a2;

@end
