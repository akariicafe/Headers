@class HMFStagedValue, NSUUID, HMMediaDestinationControllerData, HMDMediaDestinationControllerMessageHandler, HMDMediaDestinationControllerMetricsEventDispatcher, HMDMediaDestinationControllerBackingStoreHandler, NSString;
@protocol HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate;

@interface HMDMediaDestinationController : HMFObject <HMDMediaDestinationControllerMessageHandlerDataSource, HMFLogging, HMDMediaDestinationControllerBackingStoreHandlerDelegate, HMDMediaDestinationControllerMessageHandlerDelegate, HMFStagedValueDelegate>

@property (weak) id<HMDMediaDestinationControllerDataSource> dataSource;
@property (weak) id<HMDMediaDestinationControllerDelegate> delegate;
@property (readonly) BOOL isTargetDevice;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher;
@property (readonly) HMFStagedValue *stagedDestinationIdentifier;
@property (readonly) HMFStagedValue *stagedAvailableDestinationIdentifiers;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) HMMediaDestinationControllerData *data;
@property (readonly, copy) HMMediaDestinationControllerData *committedData;
@property (readonly) HMDMediaDestinationControllerMessageHandler *messageHandler;
@property (readonly) HMDMediaDestinationControllerBackingStoreHandler *backingStoreHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)urlString;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (void)configureWithHome:(id)a0;
- (id)dataSourceTargetAccessory;
- (id)messageHandler:(id)a0 shouldRelayIncomingMessage:(id)a1;
- (id)messageHandler:(id)a0 deviceForOutgoingMessage:(id)a1;
- (BOOL)messageHandler:(id)a0 reachableForOutgoingMessage:(id)a1;
- (void)mediaDestinationControllerBackingStoreHandler:(id)a0 didUpdateDestinationIdentifier:(id)a1;
- (void)mediaDestinationControllerBackingStoreHandler:(id)a0 didUpdateAvailableDestinationIdentifiers:(id)a1;
- (id)updateDestinationIdentifier:(id)a0;
- (id)updateAvailableDestinationIdentifiers:(id)a0;
- (void)stageDestinationIdentifier:(id)a0;
- (void)stagedValue:(id)a0 didExpireValue:(id)a1;
- (id)initWithData:(id)a0 backingStore:(id)a1 messageDispatcher:(id)a2 notificationCenter:(id)a3 logEventDailyScheduler:(id)a4 targetDevice:(BOOL)a5 dataSource:(id)a6 delegate:(id)a7;
- (id)assistantObjectWithHome:(id)a0 name:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(id)a1 destinationIdentifier:(id)a2 updateOptions:(unsigned long long)a3;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaDestinationUpdatedNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveHomeAccessoryRemovedNotification:(id)a1 destination:(id)a2;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaSystemAddedNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaSystemRemovedNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveAccessoryChangedRoomNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(id)a1 destinationControllerIdentifier:(id)a2 destinationIdentifier:(id)a3;
- (id)initWithBackingStoreHandler:(id)a0 messageHandler:(id)a1 metricsEventDispatcher:(id)a2 targetDevice:(BOOL)a3 dataSource:(id)a4 delegate:(id)a5;
- (void)refreshDestinationController;
- (id)updateDestinationIdentifier:(id)a0 updateOptions:(unsigned long long)a1;
- (id)updateDestinationWithIdentifier:(id)a0 audioGroupIdentifier:(id)a1;
- (id)dataSourceDestinationUsingRelatedIdentifier:(id)a0;
- (id)dataSourceDestinationManagerWithIdentifier:(id)a0;
- (void)refeshAvailableDestinationIdentifiers;
- (void)refreshDestinationIdentifier;
- (id)dataSourceAvailableDestinationIdentifiers;
- (id)filteredAvailableDestinationIdentifiers;
- (id)filteredDestinationIdentifierFilteredAvailableDestinationIdentifiers:(id)a0;
- (id)dataSourceDestinationWithIdentifier:(id)a0;
- (void)stagedValue:(id)a0 didExpireDestinationIdentifier:(id)a1;
- (void)stagedValue:(id)a0 didExpireAvailableDestinationIdentifiers:(id)a1;
- (void)notifyDelegateDidExpireStagedValues;
- (void)stageAvailableDestinationIdentifiers:(id)a0;
- (void)triggerStageValueDidExpireValueForStagedDestinationIdentifier;
- (void)triggerStageValueDidExpireValueForStagedAvailableDestinationIdentifiers;

@end
