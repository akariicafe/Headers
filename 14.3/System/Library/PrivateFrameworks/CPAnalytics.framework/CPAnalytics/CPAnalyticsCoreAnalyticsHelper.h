@interface CPAnalyticsCoreAnalyticsHelper : NSObject

+ (void)sendCoreAnalyticsEvent:(id)a0 withPayload:(id)a1;
+ (id)_caCompatiblePayloadKey:(id)a0;
+ (void)_sendCoreAnalyticsEvent:(id)a0 withCompatiblePayload:(id)a1;
+ (id)_buildCACompatiblePayload:(id)a0;

@end
