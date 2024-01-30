@class VKAnalyticsSessionAccumulator;

@interface VKAnalyticsProcessor : NSObject

@property (retain, nonatomic) VKAnalyticsSessionAccumulator *sessionAccumulator;
@property (nonatomic) BOOL isPublicAPI;

- (void)processAndSendEvent:(id)a0;
- (void)sendCoreAnalyticsEvent:(id)a0 block:(id /* block */)a1;
- (void)processAndSendSession:(id)a0;
- (void).cxx_destruct;

@end
