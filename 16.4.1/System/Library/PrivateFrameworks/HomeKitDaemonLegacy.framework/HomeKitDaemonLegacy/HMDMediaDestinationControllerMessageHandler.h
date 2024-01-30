@class NSString, HMDMediaDestinationControllerMetricsEventDispatcher;
@protocol HMDMediaDestinationControllerMessageHandlerDataSource, HMDMediaDestinationControllerMessageHandlerDelegate;

@interface HMDMediaDestinationControllerMessageHandler : HMDAppleMediaAccessoryMessageHandler <HMFLogging>

@property (weak) id<HMDMediaDestinationControllerMessageHandlerDataSource> dataSource;
@property (weak) id<HMDMediaDestinationControllerMessageHandlerDelegate> delegate;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)handleMediaDestinationControllerUpdatedDestinationNotification:(id)a0;
- (id)destinationIdentifierInMessage:(id)a0 error:(id *)a1;
- (void)handleHomeAccessoryRemovedNotification:(id)a0;
- (void)handleMediaDestinationControllerUpdateDestinationRequestMessage:(id)a0;
- (void)handleMediaDestinationUpdatedNotification:(id)a0;
- (void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)a0;
- (void)handleMediaSystemAddedNotification:(id)a0;
- (void)handleMediaSystemRemovedNotification:(id)a0;
- (void)handleNotificationAccessoryChangedRoom:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 metricsEventDispatcher:(id)a3 targetDevice:(BOOL)a4 dataSource:(id)a5 delegate:(id)a6;
- (void)notifyUpdatedDestinationWithIdentifier:(id)a0;
- (unsigned long long)upateOptionsInMessage:(id)a0 error:(id *)a1;

@end
