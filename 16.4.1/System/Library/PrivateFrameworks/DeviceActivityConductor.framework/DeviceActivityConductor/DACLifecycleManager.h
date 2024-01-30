@class DACActivityList, NSString, NSXPCConnection, NSMutableSet, NSObject, DACDeviceRole;
@protocol OS_dispatch_queue, DACLifecycleManagerDelegate;

@interface DACLifecycleManager : NSObject <DACLifecycleClientInterface>

@property (readonly, weak, nonatomic) id<DACLifecycleManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) DACDeviceRole *role;
@property (retain, nonatomic) DACActivityList *activityList;
@property (weak, nonatomic) NSXPCConnection *currentConnection;
@property (retain, nonatomic) NSMutableSet *registeredActivities;
@property (nonatomic) BOOL shouldAttemptReconnect;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) int resetNotifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)registerActivity:(id)a0;
- (void)unregisterActivity:(id)a0;
- (id)_serviceConnection;
- (void)dealloc;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_lostConnectionToService;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 cluster:(id)a1 queue:(id)a2;
- (void)_conductordResetOnQueue;
- (void)activityListChanged:(id)a0;
- (void)enumerateLifecycleInfo:(id /* block */)a0;
- (void)lifecycleStateOfActivity:(id)a0 result:(id /* block */)a1;
- (void)requestActivationOfActivity:(id)a0 requester:(id)a1;
- (void)requestDeactivationOfActivity:(id)a0 requester:(id)a1;
- (void)roleChanged:(id)a0;

@end
