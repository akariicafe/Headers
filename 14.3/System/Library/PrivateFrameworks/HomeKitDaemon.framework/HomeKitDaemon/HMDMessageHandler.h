@class NSUUID, NSString, NSArray, HMFUnfairLock, NSMutableDictionary, NSDictionary, HMFMessageDispatcher, NSObject, HMDMessageHandlerMetricsDispatcher, NSNotificationCenter;
@protocol HMDMessageHandlerDataSource, OS_dispatch_queue;

@interface HMDMessageHandler : HMFObject <HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver> {
    HMFUnfairLock *_lock;
    NSMutableDictionary *_messageIdentifierToQueuedIncomingMessages;
    NSMutableDictionary *_messageNameToQueuedOutgoingMessage;
    NSMutableDictionary *_deviceIdentifierToQueuedOutgoingMessageNames;
}

@property (readonly) HMDMessageHandlerMetricsDispatcher *metricsDispatcher;
@property (weak) id<HMDMessageHandlerDataSource> dataSource;
@property (readonly, copy) NSArray *ownerPrivateRemoteMessages;
@property (readonly, copy) NSArray *adminPrivateRemoteMessages;
@property (readonly, copy) NSArray *internalMessages;
@property (readonly, copy) NSArray *notifications;
@property (readonly, copy) NSDictionary *notificationsToObject;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) BOOL hasQueuedIncomingMessages;
@property (readonly) BOOL hasQueuedOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)registerForNotifications;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (void)configureWithHome:(id)a0;
- (void)routeMessage:(id)a0;
- (void)didTriggerMessageHandlerQueuedMessage:(id)a0;
- (void)relayMessage:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 ownerPrivateRemoteMessages:(id)a3 adminPrivateRemoteMessages:(id)a4 internalMessages:(id)a5 notifications:(id)a6 notificationsToObject:(id)a7;
- (void)routeQueuedIncomingMessages;
- (void)sendQueuedOutgoingMessages;
- (BOOL)hasQueuedOutgoingMessagesForDevice:(id)a0;
- (void)sendQueuedOutgoingMessagesForDevice:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 ownerPrivateRemoteMessages:(id)a3 adminPrivateRemoteMessages:(id)a4 internalMessages:(id)a5 notifications:(id)a6 notificationsToObject:(id)a7 metricsDispatcher:(id)a8;
- (void)registerForMessagesWithHome:(id)a0;
- (void)registerForSPIRemoteMessages:(id)a0 home:(id)a1 userPrivilege:(unsigned long long)a2 internalBuildOnly:(BOOL)a3;
- (SEL)selectorForName:(id)a0;
- (id)queuedIncomingMessages;
- (void)routeMessage:(id)a0 shouldQueue:(BOOL)a1;
- (void)queueIncomingMessage:(id)a0;
- (BOOL)isReadyForIncomingMessage:(id)a0 error:(id *)a1;
- (id)dequeueIncomingMessage:(id)a0;
- (BOOL)shouldRelayIncomingMessage:(id)a0 error:(id *)a1;
- (void)relayMessage:(id)a0 shouldQueue:(BOOL)a1;
- (void)queueOutgoingMessage:(id)a0;
- (id)deviceForMessage:(id)a0;
- (void)associateDevice:(id)a0 withOutgoingMessage:(id)a1;
- (BOOL)reachableForMessage:(id)a0;
- (id)dequeueOutgoingMessage:(id)a0;
- (id)queuedOutgoingMessages;
- (void)sendQueuedOutgoingMessages:(id)a0;
- (id)queuedOutgoingMessagesForDevice:(id)a0;
- (id)dequeueQueuedIncomingMessages;
- (id)queuedIncomingMessageWithIdentifier:(id)a0;
- (void)didTriggerQueuedIncomingMessage:(id)a0;
- (void)didTriggerQueuedOutgoingMessage:(id)a0;
- (void)triggerQueuedOutgoingMessagesTimeouts;
- (void)triggerQueuedIncomingMessagesTimeouts;

@end
