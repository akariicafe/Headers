@class HMFMessageDispatcher, NSString, HMDHome, NSUUID, NSObject;
@protocol HMDFeaturesDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, OS_dispatch_queue;

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, weak) HMDHome *home;
@property (weak) id<HMDHomeMediaSystemControllerMessageHandlerDelegate> delegate;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)homeUUID;
- (id)logIdentifier;
- (id)messageDestination;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)_legacyHandleRemoveMediaSystem:(id)a0;
- (void)_legacyHandleUpdateMediaSystem:(id)a0;
- (void)_legacyHandleAddMediaSystem:(id)a0;
- (void)_legacyHandleAddMediaSystemWithPreProcessedMessage:(id)a0;
- (void)_routeAddMediaSystem:(id)a0;
- (void)_routeRemoveMediaSystem:(id)a0;
- (void)_routeUpdateMediaSystem:(id)a0;
- (id)defaultAssociatedGroupIdentifier;
- (id)initWithQueue:(id)a0 home:(id)a1 messageDispatcher:(id)a2 delegate:(id)a3;
- (id)initWithQueue:(id)a0 home:(id)a1 messageDispatcher:(id)a2 delegate:(id)a3 featuresDataSource:(id)a4;
- (void)locallyAddMediaSystemUsingRequestMessage:(id)a0;
- (void)locallyRemoveMediaSystemUsingRemoveRequestMessage:(id)a0;
- (void)locallyUpdateMediaSystemUsingRequestMessage:(id)a0;
- (id)mediaGroupsAggregator;
- (id)mediaSystemNameFromRoomWithAccessoryUUIDs:(id)a0;
- (id)messageRouter;
- (id)preProcessMediaSystemMessage:(id)a0;
- (void)queueOnboardingForUnconfiguredParticipantWithAccessoryUUID:(id)a0 associatedGroupIdentifier:(id)a1;
- (void)routeAddMediaSystem:(id)a0;
- (void)routeRemoveMediaSystem:(id)a0;
- (void)routeUpdateMediaSystem:(id)a0;
- (id)stagingMediaSystemDataFromData:(id)a0 accessoryUUIDs:(id)a1;
- (id)unconfiguredParticipantOnboardingManager;
- (id /* block */)updateMediaSystemCompletionBlockWithMessage:(id)a0 data:(id)a1 accessoryUUIDs:(id)a2;
- (id)updateParticipantWithAccessoryUUID:(id)a0 associatedGroupIdentifier:(id)a1;
- (id)validateConfiguredName:(id)a0;
- (id)validatePayload:(id)a0;

@end
