@class HMFMessageDispatcher, NSString, NSUUID, NSObject, HMDSiriEndpointProfileMessageHandler;
@protocol HMDMessageRouter, OS_dispatch_queue;

@interface HMDSiriEndpointProfilesMessenger : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDMessageRouter> messageRouter;
@property (readonly) HMDSiriEndpointProfileMessageHandler *messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 messageRouter:(id)a2 messageHandler:(id)a3;
- (id)intermediateApplyOnboardingSelectionsRequestMessageForMessage:(id)a0 error:(id *)a1;
- (void)registerForMessagesWithHome:(id)a0;
- (void)routeSiriEndpointApplyOnboardingSelectionsRequestMessage:(id)a0;
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)a0;

@end
