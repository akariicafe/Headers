@class NSMapTable, NSUUID, NSString, HMFMessageDispatcher, NSNotificationCenter, NSObject, HMEPersistentConnectionServer;
@protocol OS_dispatch_queue;

@interface HMDXPCEventRouterServer : NSObject <HMFMessageReceiver, HMEPersistentConnectionServerDelegate, HMEPersistentConnectionServerDataSource, HMFLogging>

@property (readonly) HMEPersistentConnectionServer *persistentConnectionServer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *messageUUID;
@property (readonly, copy) NSString *changeRegistrationsMessageName;
@property (readonly, copy) NSString *updateEventsMessageName;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) NSMapTable *clientToRegistrationMapping;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)dumpStateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)handleXPCConnectionInvalidated:(id)a0;
- (unsigned long long)debounceTimeForConnection:(id)a0;
- (void)sendUpdatedEvents:(id)a0 toConnection:(id)a1;
- (void)sendUpdatedCachedEvents:(id)a0 toConnection:(id)a1;
- (BOOL)shouldAllowEvent:(id)a0 topic:(id)a1 connection:(id)a2;
- (id)initWithMessageUUID:(id)a0 changeRegistrationsMessageName:(id)a1 updateEventsMessageName:(id)a2 messageDispatcher:(id)a3 queue:(id)a4 notificationCenter:(id)a5 subscriptionProvider:(id)a6 registrationEventRouter:(id)a7 storeReadHandle:(id)a8;
- (id)initWithMessageUUID:(id)a0 changeRegistrationsMessageName:(id)a1 updateEventsMessageName:(id)a2 messageDispatcher:(id)a3 queue:(id)a4 notificationCenter:(id)a5 persistentConnectionServerFactory:(id /* block */)a6;
- (void)_handleChangeRegistrationsRequest:(id)a0;
- (void)handleConnectionActiveStateChange:(id)a0;

@end
