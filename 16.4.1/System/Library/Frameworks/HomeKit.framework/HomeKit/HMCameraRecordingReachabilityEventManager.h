@class NSUUID, _HMContext, NSNotificationCenter, NSHashTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMCameraRecordingReachabilityEventManager : NSObject <HMFMessageReceiver, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSHashTable *observers;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void)unsubscribe;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)subscribe;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)deleteAllEventsWithCompletionHandler:(id /* block */)a0;
- (void)fetchAllEventsWithCompletion:(id /* block */)a0;
- (void)fetchCountOfAllEventsWithCompletion:(id /* block */)a0;
- (void)fetchCountOfEventsWithDateInterval:(id)a0 completion:(id /* block */)a1;
- (void)fetchEventsAfterDate:(id)a0 withLimit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchEventsBeforeDate:(id)a0 withLimit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchEventsWithDateInterval:(id)a0 limit:(unsigned long long)a1 shouldOrderAscending:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleDaemonReconnectedNotification:(id)a0;
- (void)handleDidChangeEventsMessage:(id)a0;
- (id)initWithContext:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithContext:(id)a0 uniqueIdentifier:(id)a1 notificationCenter:(id)a2;

@end
