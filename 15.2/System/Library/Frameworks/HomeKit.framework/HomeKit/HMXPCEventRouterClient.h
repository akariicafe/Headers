@class NSUUID, HMFMessageDispatcher, NSString, HMEPersistentConnectionClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMXPCEventRouterClient : NSObject <HMFMessageReceiver, HMEPersistentConnectionClientDelegate, HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *changeRegistrationsMessageName;
@property (readonly, copy) NSString *updateMessageName;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMEPersistentConnectionClient *eventRouterClient;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 changeRegistrationsMessageName:(id)a3 updateMessageName:(id)a4 eventRouterClientFactory:(id /* block */)a5;
- (id)logIdentifier;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)a0 removedFilters:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 changeRegistrationsMessageName:(id)a3 updateMessageName:(id)a4 storeReadHandle:(id)a5 storeWriteHandle:(id)a6;
- (id)eventRouter;
- (id)messageDestination;
- (void)_handleUpdateEventsMessage:(id)a0;

@end
