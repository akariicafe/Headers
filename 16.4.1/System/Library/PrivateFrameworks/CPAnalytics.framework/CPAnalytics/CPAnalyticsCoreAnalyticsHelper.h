@interface CPAnalyticsCoreAnalyticsHelper : NSObject

+ (id)caCompatiblePayloadKey:(id)a0;
+ (id)buildCACompatiblePayload:(id)a0;
+ (void)sendCoreAnalyticsEvent:(id)a0 withPayload:(id)a1 shouldSanitize:(BOOL)a2;
+ (BOOL)isValidCoreAnalyticsValueType:(id)a0;
+ (void)analyticsSendEventLazy:(id)a0 payload:(id /* block */)a1;

@end
