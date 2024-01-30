@class NSXPCListener, NSUserDefaults, _ContextSyncSubscriptions, NSString, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface ContextSyncService : NSObject <NSXPCListenerDelegate, IDSServiceDelegate, ContextSyncManaging>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) _ContextSyncSubscriptions *subscriptions;
@property (retain, nonatomic) NSUserDefaults *subscriptionDefaults;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *biomeQueue;
@property (retain, nonatomic) NSMutableDictionary *remoteDSLIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *localDSLIdentifiers;
@property (nonatomic) BOOL rebootNotificationDelivered;
@property (retain, nonatomic) NSMutableDictionary *lockedUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextSyncManager;
+ (id)stringForIDSDeviceType:(long long)a0;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connection:(id)a0 devicesChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)bmdslFromMessage:(id)a0 forIdentifier:(id)a1;
- (void)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2 withHandler:(id /* block */)a3;
- (void)contextChanged:(id)a0 forSubscriptionWithIdentifier:(id)a1;
- (id)contextSyncLOIFromSemanticLocationEvent:(id)a0;
- (id)devicesWithDeviceType:(long long)a0;
- (id)idsDeviceForDeviceUUID:(id)a0;
- (void)initializeSinksForRemoteDSLIdentifiers:(id)a0;
- (void)loadSubscriptions;
- (void)logMetricsForIdentifier:(id)a0 withLocalDSL:(id)a1 forDevice:(id)a2 uponReboot:(BOOL)a3;
- (void)logMetricsForMessage:(id)a0 andContext:(id)a1 fromDevice:(id)a2;
- (BOOL)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(BOOL)a2 forDeviceTypes:(long long)a3 withError:(id *)a4;
- (void)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(BOOL)a2 forDeviceTypes:(long long)a3 withErrorHandler:(id /* block */)a4;
- (void)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(BOOL)a2 forDeviceTypes:(long long)a3 withHandler:(id /* block */)a4;
- (BOOL)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(BOOL)a2 forDevices:(id)a3 withError:(id *)a4;
- (void)registerForUpdates:(id)a0 withIdentifier:(id)a1 shouldWake:(BOOL)a2 forDevices:(id)a3 withErrorHandler:(id /* block */)a4;
- (BOOL)registerRemoteDSLSubscription:(id)a0 withRemoteIdentifier:(id)a1 asWakingCall:(BOOL)a2 forDevices:(id)a3;
- (id)registerSinkWithIdentifier:(id)a0 withDSL:(id)a1;
- (void)removeSubscriptionsForRemoteDevice:(id)a0;
- (void)saveObject:(id)a0 forDevice:(id)a1;
- (void)saveRemoteSubscription:(id)a0 forDevice:(id)a1;
- (void)sendIDSMessageAsWaking:(BOOL)a0 toDevices:(id)a1 withContent:(id)a2;
- (void)sendLocalSubscriptionToDevice:(id)a0;
- (void)subscribeToBiomeWithRemoteDSL:(id)a0 forRemoteIdentifier:(id)a1;
- (BOOL)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2 withError:(id *)a3;
- (void)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDeviceTypes:(long long)a2 withErrorHandler:(id /* block */)a3;
- (BOOL)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDevices:(id)a2 withError:(id *)a3;
- (void)unregisterForUpdates:(id)a0 withIdentifier:(id)a1 forDevices:(id)a2 withErrorHandler:(id /* block */)a3;
- (BOOL)unregisterRemoteDSLSubscription:(id)a0 withRemoteIdentifier:(id)a1 forDevices:(id)a2;
- (void)updateSubscriptionsAfterUnlock;

@end
