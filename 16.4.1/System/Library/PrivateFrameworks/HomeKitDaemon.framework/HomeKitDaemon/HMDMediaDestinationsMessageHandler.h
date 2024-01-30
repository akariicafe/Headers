@protocol HMDMediaDestinationsMessageHandlerDelegate, HMDMediaDestinationsMessageHandlerDataSource;

@interface HMDMediaDestinationsMessageHandler : HMDMediaDestinationMessageHandler

@property (weak) id<HMDMediaDestinationsMessageHandlerDataSource> dataSource;
@property (weak) id<HMDMediaDestinationsMessageHandlerDelegate> delegate;

- (void).cxx_destruct;
- (void)handleMediaDestinationUpdatedNotification:(id)a0;
- (void)handleUpdatedDestination:(id)a0;
- (id)initWithDestination:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 dataSource:(id)a3 delegate:(id)a4;

@end
