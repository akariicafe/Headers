@interface AVTCoreAnalyticsClient : NSObject <AVTCoreAnalyticsClient>

- (void)sendEventForKey:(id)a0 payload:(id)a1;
- (void)ADClientSetValueForScalarKey:(id)a0 :(long long)a1;
- (void)ADClientAddValueForScalarKey:(id)a0 :(long long)a1;
- (void)ADClientPushValueForDistributionKey:(id)a0 :(double)a1;

@end
