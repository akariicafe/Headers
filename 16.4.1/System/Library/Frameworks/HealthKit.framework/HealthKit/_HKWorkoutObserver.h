@class NSMutableArray, NSUUID, HKHealthStore, HKTaskServerProxyProvider, NSString, NSLock, _HKCurrentWorkoutSnapshot;
@protocol _HKWorkoutObserverDelegate;

@interface _HKWorkoutObserver : NSObject <_HKXPCExportable> {
    NSLock *_lock;
    _HKCurrentWorkoutSnapshot *_latestSnapshot;
    BOOL _receivedInitialSnapshot;
    id<_HKWorkoutObserverDelegate> _delegate;
    NSMutableArray *_pendingHandlers;
    int _notifyToken;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id<_HKWorkoutObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_lock_startTaskServerIfNeeded;
- (void)_startTaskServerIfNeeded;
- (void)clientRemote_didUpdateWorkoutSnapshot:(id)a0;
- (void)currentWorkoutSnapshotWithCompletion:(id /* block */)a0;
- (void)waitForAutomaticWorkoutRecoveryWithCompletion:(id /* block */)a0;

@end
