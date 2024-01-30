@class NSString, NSUUID, _HMContext, NSNotificationCenter, HMFUnfairLock, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMCameraRecordingReachabilityEventManager : NSObject <HMFMessageReceiver, HMFLogging>

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMFUnfairLock *lock;
@property (readonly) NSHashTable *observers;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)subscribe;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)handleDaemonReconnectedNotification:(id)a0;
- (void)dealloc;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (id)initWithContext:(id)a0 uniqueIdentifier:(id)a1 notificationCenter:(id)a2;
- (void)handleDidChangeEventsMessage:(id)a0;
- (void)fetchEventsBeforeDate:(id)a0 withLimit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchEventsAfterDate:(id)a0 withLimit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchCountOfEventsWithDateInterval:(id)a0 completion:(id /* block */)a1;
- (void)fetchEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 shouldOrderAscending:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteAllEventsWithCompletionHandler:(id /* block */)a0;
- (void)fetchEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchAllEventsWithCompletion:(id /* block */)a0;
- (void)fetchCountOfAllEventsWithCompletion:(id /* block */)a0;
- (void)unsubscribe;
- (id)initWithContext:(id)a0 uniqueIdentifier:(id)a1;
- (id)logIdentifier;

@end
