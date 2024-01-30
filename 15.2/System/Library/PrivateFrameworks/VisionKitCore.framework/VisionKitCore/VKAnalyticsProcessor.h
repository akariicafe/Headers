@class VKAnalyticsSessionAccumulator;

@interface VKAnalyticsProcessor : NSObject

@property (retain, nonatomic) VKAnalyticsSessionAccumulator *sessionAccumulator;

- (void).cxx_destruct;
- (void)processAndSendEvent:(id)a0;
- (void)processAndSendSession:(id)a0;
- (void)sendCoreAnalyticsEvent:(id)a0 block:(id /* block */)a1;

@end
