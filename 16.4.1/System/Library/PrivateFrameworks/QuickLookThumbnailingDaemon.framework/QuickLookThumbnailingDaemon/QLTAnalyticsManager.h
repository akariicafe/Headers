@interface QLTAnalyticsManager : NSObject

+ (id)sharedManager;

- (void)_sendEvent:(id)a0;
- (id)_eventsQueue;
- (void)sendCacheSizeEventWithCacheSize:(unsigned long long)a0;

@end
