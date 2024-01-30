@class HMDMessageDispatcher;
@protocol HMFMessageReceiver;

@interface HMDHouseholdMetricsMessagingProvider : NSObject <HMDHouseholdMetricsMessaging>

@property (readonly, nonatomic) id<HMFMessageReceiver> receiver;
@property (readonly, nonatomic) HMDMessageDispatcher *messageDispatcher;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithReceiver:(id)a0;
- (void)deregisterForMessage:(id)a0;
- (id)initWithReceiver:(id)a0 messageDispatcher:(id)a1;
- (void)registerForMessage:(id)a0 messageHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0 toDevice:(id)a1 withPayload:(id)a2 responseHandler:(id /* block */)a3;

@end
