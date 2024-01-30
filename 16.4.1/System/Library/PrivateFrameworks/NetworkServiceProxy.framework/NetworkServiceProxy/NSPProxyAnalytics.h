@interface NSPProxyAnalytics : NSObject

- (id)eventName;
- (id)analyticsDict;
- (void)sendAnalytics;

@end
