@class COObserverSet, NSXPCConnection, HMAccessory, NSString, NSUUID;
@protocol COAlarmManagerConnectionProvider;

@interface COAlarmManager : NSObject <COAlarmManagerClientInterface, COObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COAlarmManagerConnectionProvider> provider;
@property (readonly, nonatomic) COObserverSet *observers;
@property (readonly, copy, nonatomic) NSString *cluster;
@property (readonly, nonatomic) NSUUID *instanceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)removeAlarm:(id)a0;
- (id)alarms;
- (id)addAlarm:(id)a0;
- (id)updateAlarm:(id)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)alarmsForAccessory:(id)a0;
- (id)snoozeAlarmWithIdentifier:(id)a0;
- (void)_handleNotification:(id)a0;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (void)_registerObserverWithName:(id)a0;
- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (void)removeObserver:(id)a0;
- (void)_lostConnectionToService;
- (BOOL)_canDispatchForAssociatedAccessory;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)initForAccessory:(id)a0 withConnectionProvider:(id)a1;
- (void).cxx_destruct;
- (id)initWithConnectionProvider:(id)a0;
- (id)init;
- (id)_categoryTypeForAlarm:(id)a0;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (id)_alarmsForAccessoryUniqueIdentifier:(id)a0 categoryType:(id)a1 includingSleepAlarm:(BOOL)a2;

@end
