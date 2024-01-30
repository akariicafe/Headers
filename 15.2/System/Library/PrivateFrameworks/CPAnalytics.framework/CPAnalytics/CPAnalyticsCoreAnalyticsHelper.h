@interface CPAnalyticsCoreAnalyticsHelper : NSObject

+ (id)_buildCACompatiblePayload:(id)a0;
+ (void)sendCoreAnalyticsEvent:(id)a0 withPayload:(id)a1 shouldSanitize:(BOOL)a2;
+ (void)_analyticsSendEventLazy:(id)a0 payload:(id /* block */)a1;
+ (BOOL)_isValidCoreAnalyticsValueType:(id)a0;
+ (id)_caCompatiblePayloadKey:(id)a0;

@end
