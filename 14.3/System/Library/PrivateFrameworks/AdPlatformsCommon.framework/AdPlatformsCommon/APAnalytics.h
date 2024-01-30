@interface APAnalytics : NSObject

+ (void)sendEvent:(id)a0;
+ (void)_sendEvent:(id)a0 payload:(id)a1;
+ (void)_analyticsSendEvent:(id)a0 eventPayload:(id)a1;
+ (void)sendEventTimed:(long long)a0 startDate:(id)a1 endDate:(id)a2 message:(id)a3;
+ (void)sendEventError:(long long)a0 message:(id)a1;
+ (void)sendEvent:(id)a0 valueInt:(long long)a1;
+ (void)sendEvent:(id)a0 valueFloat:(float)a1;
+ (void)sendEvent:(id)a0 customPayload:(id)a1;

@end
