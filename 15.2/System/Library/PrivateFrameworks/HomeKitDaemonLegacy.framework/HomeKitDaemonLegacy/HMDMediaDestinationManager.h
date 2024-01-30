@class HMFStagedValue, HMDMediaDestinationManagerMetricsDispatcher, HMDMediaDestinationBackingStoreHandler, NSString, NSUUID, HMMediaDestination, HMDMediaDestinationMessageHandler;
@protocol HMDMediaDestinationManagerDelegate, HMDMediaDestinationManagerDataSource;

@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate>

@property (weak) id<HMDMediaDestinationManagerDataSource> dataSource;
@property (weak) id<HMDMediaDestinationManagerDelegate> delegate;
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher;
@property (readonly) HMFStagedValue *stagedAudioGroupIdentifier;
@property (readonly) HMDMediaDestinationBackingStoreHandler *backingStoreHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *identifier;
@property (readonly) HMMediaDestination *destination;
@property (readonly) HMMediaDestination *committedDestination;
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler;

+ (id)logCategory;

- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)stageAudioGroupIdentifier:(id)a0;
- (id)messageHandler:(id)a0 shouldRelayIncomingMessage:(id)a1;
- (id)messageHandler:(id)a0 deviceForOutgoingMessage:(id)a1;
- (BOOL)messageHandler:(id)a0 reachableForOutgoingMessage:(id)a1;
- (void)mediaDestinationMessageHandler:(id)a0 didReceiveUpdateSupportedOptionsRequestMessage:(id)a1 supportOptions:(unsigned long long)a2;
- (void)mediaDestinationMessageHandler:(id)a0 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)a1 audioGroupIdentifier:(id)a2;
- (void)configureWithHome:(id)a0;
- (id)dataSourceTargetAccessory;
- (id)dataSourceDestinationControllerWithIdentifier:(id)a0;
- (void)migrateWithHome:(id)a0 cloudZone:(id)a1 migrationQueue:(id)a2 completion:(id /* block */)a3;
- (void)mediaDestinationBackingStoreHandler:(id)a0 didUpdateDestination:(id)a1;
- (void)stagedValue:(id)a0 didExpireValue:(id)a1;
- (id)initWithDestination:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 backingStore:(id)a3 dataSource:(id)a4 delegate:(id)a5;
- (id)initWithDestination:(id)a0 messageHandler:(id)a1 backingStoreHandler:(id)a2 metricsDispatcher:(id)a3 dataSource:(id)a4 delegate:(id)a5;
- (id)dataSourceRootDestinationManager;
- (id)updateSupportedOptions:(unsigned long long)a0;
- (id)updateAudioGroupIdentifier:(id)a0;
- (void)notifyDelegateDidUpdateStagedValues;
- (void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;

@end
