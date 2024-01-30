@class HMFMessageDispatcher, NSString, NSUUID, HMDAccessorySettingsLocalMessageHandler, NSObject;
@protocol HMDMessageRouter, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDAccessorySettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDMessageRouter> messageRouter;
@property (readonly) HMDAccessorySettingsLocalMessageHandler *messageHandler;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)a0 keyPaths:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)a0 keyPath:(id)a1 settingValue:(id)a2 completionHandler:(id /* block */)a3;
- (id)fetchLogEventFromMessage:(id)a0;
- (void)registerForMessagesWithHome:(id)a0;
- (void)routeAccessorySettingsFetchRequestMessage:(id)a0;
- (void)routeAccessorySettingsUpdateRequestMessage:(id)a0;
- (void)updateAndPostFetchSettingsEvent:(id)a0 responsePayload:(id)a1 responseError:(id)a2;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 messageRouter:(id)a2 messageHandler:(id)a3 logEventSubmitter:(id)a4;

@end
