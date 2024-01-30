@class COObserverSet, NSXPCConnection, HMAccessory, NSString, NSUUID;
@protocol COTimerManagerConnectionProvider;

@interface COTimerManager : NSObject <COTimerManagerClientInterface, COObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COTimerManagerConnectionProvider> provider;
@property (readonly, nonatomic) COObserverSet *observers;
@property (readonly, copy, nonatomic) NSString *cluster;
@property (readonly, nonatomic) NSUUID *instanceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)timers;
- (id)removeTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)_handleNotification:(id)a0;
- (id)addTimer:(id)a0;
- (id)updateTimer:(id)a0;
- (void)_registerObserverWithName:(id)a0;
- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (void)removeObserver:(id)a0;
- (void)_lostConnectionToService;
- (BOOL)_canDispatchForAssociatedAccessory;
- (id)_timersForAccessoryUniqueIdentifier:(id)a0;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)initForAccessory:(id)a0 withConnectionProvider:(id)a1;
- (void).cxx_destruct;
- (id)initWithConnectionProvider:(id)a0;
- (id)timersForAccessory:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;

@end
