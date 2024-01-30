@class HMFStagedValue, NSString, NSUUID, HMMediaDestinationControllerData, HMDMediaDestinationControllerMetricsEventDispatcher, HMDMediaDestinationControllerMessageHandler, HMDMediaDestinationControllerBackingStoreHandler;
@protocol HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate;

@interface HMDMediaDestinationController : HMFObject <HMDMediaDestinationControllerMessageHandlerDataSource, HMFLogging, HMDMediaDestinationControllerBackingStoreHandlerDelegate, HMDMediaDestinationControllerMessageHandlerDelegate, HMFStagedValueDelegate>

@property (readonly, copy) NSString *urlString;
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

- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)messageHandler:(id)a0 shouldRelayIncomingMessage:(id)a1;
- (id)messageHandler:(id)a0 deviceForOutgoingMessage:(id)a1;
- (BOOL)messageHandler:(id)a0 reachableForOutgoingMessage:(id)a1;
- (void)configureWithHome:(id)a0;
- (id)dataSourceTargetAccessory;
- (void)migrateWithHome:(id)a0 cloudZone:(id)a1 migrationQueue:(id)a2 completion:(id /* block */)a3;
- (id)updateDestinationIdentifier:(id)a0;
- (id)updateAvailableDestinationIdentifiers:(id)a0;
- (void)mediaDestinationControllerBackingStoreHandler:(id)a0 didUpdateAvailableDestinationIdentifiers:(id)a1;
- (void)mediaDestinationControllerBackingStoreHandler:(id)a0 didUpdateDestinationIdentifier:(id)a1;
- (void)stagedValue:(id)a0 didExpireValue:(id)a1;
- (void)notifyDelegateDidUpdateStagedValues;
- (void)stageDestinationIdentifier:(id)a0;
- (id)initWithData:(id)a0 backingStore:(id)a1 messageDispatcher:(id)a2 notificationCenter:(id)a3 logEventDailyScheduler:(id)a4 targetDevice:(BOOL)a5 dataSource:(id)a6 delegate:(id)a7;
- (id)assistantObjectWithHome:(id)a0 name:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(id)a1 destinationControllerIdentifier:(id)a2 destinationIdentifier:(id)a3;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveAccessoryChangedRoomNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaSystemRemovedNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaSystemAddedNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveHomeAccessoryRemovedNotification:(id)a1 destination:(id)a2;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaDestinationUpdatedNotification:(id)a1;
- (void)mediaDestinationControllerMessageHandler:(id)a0 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(id)a1 destinationIdentifier:(id)a2 updateOptions:(unsigned long long)a3;
- (id)initWithBackingStoreHandler:(id)a0 messageHandler:(id)a1 metricsEventDispatcher:(id)a2 targetDevice:(BOOL)a3 dataSource:(id)a4 delegate:(id)a5;
- (void)stageAvailableDestinationIdentifiers:(id)a0;
- (id)updateDestinationIdentifier:(id)a0 updateOptions:(unsigned long long)a1;
- (void)unsetAudioGroupForCurrentDestination;
- (id)updateDestinationWithIdentifier:(id)a0 audioGroupIdentifier:(id)a1;
- (void)refreshDestinationController;
- (void)refeshAvailableDestinationIdentifiers;
- (void)refreshDestinationIdentifier;
- (BOOL)hasSetDestinationRelatedToIdentifier:(id)a0;
- (id)filteredAvailableDestinationIdentifiers;
- (id)filteredDestinationIdentifierFilteredAvailableDestinationIdentifiers:(id)a0;
- (id)dataSourceAvailableDestinationIdentifiers;
- (id)dataSourceDestinationManagerWithIdentifier:(id)a0;
- (id)dataSourceDestinationWithIdentifier:(id)a0;
- (id)dataSourceDestinationUsingRelatedIdentifier:(id)a0;
- (void)triggerStageValueDidExpireValueForStagedDestinationIdentifier;
- (void)triggerStageValueDidExpireValueForStagedAvailableDestinationIdentifiers;
- (void)stagedValue:(id)a0 didExpireDestinationIdentifier:(id)a1;
- (void)stagedValue:(id)a0 didExpireAvailableDestinationIdentifiers:(id)a1;

@end
