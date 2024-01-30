@protocol HMDMediaDestinationMessageHandlerDelegate, HMDMediaDestinationMessageHandlerDataSource;

@interface HMDMediaDestinationMessageHandler : HMDAppleMediaAccessoryMessageHandler

@property (weak) id<HMDMediaDestinationMessageHandlerDataSource> dataSource;
@property (weak) id<HMDMediaDestinationMessageHandlerDelegate> delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)a0;
- (id)audioGroupIdentifierInMessage:(id)a0 error:(id *)a1;
- (void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)a0;
- (void)handleUpdatedDestination:(id)a0;
- (id)initWithDestination:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 dataSource:(id)a3 delegate:(id)a4;
- (id)initWithDestination:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 notifications:(id)a3 dataSource:(id)a4 delegate:(id)a5;
- (void)sendRequestToUpdateAudioGroupIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendRequestToUpdateSupportOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)supportedOptionsInMessage:(id)a0 error:(id *)a1;

@end
