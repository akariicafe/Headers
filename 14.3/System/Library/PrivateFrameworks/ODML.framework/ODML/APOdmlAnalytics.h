@interface APOdmlAnalytics : NSObject

+ (void)_analyticsSendEvent:(id)a0 eventPayload:(id)a1;
+ (void)sendEventReranking:(long long)a0 startDate:(id)a1 endDate:(id)a2 error:(id)a3;
+ (void)sendEventFeatureCalculation:(long long)a0 error:(id)a1;
+ (id)getVersionAndIdentifiers;
+ (void)sendEventPrediction:(long long)a0 error:(id)a1;
+ (void)sendEventFeatureStorage:(long long)a0 error:(id)a1;

@end
