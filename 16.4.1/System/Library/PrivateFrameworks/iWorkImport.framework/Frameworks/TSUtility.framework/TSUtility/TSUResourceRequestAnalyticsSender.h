@interface TSUResourceRequestAnalyticsSender : NSObject

+ (id)sharedInstanceQueue;
+ (void)sendAnalyticsForResourceRequest:(id)a0 error:(id)a1;
+ (void)setSharedAnalyticsSender:(id)a0;

- (void)sendAnalyticsForResourceRequest:(id)a0 error:(id)a1;

@end
