@interface APOdmlAnalyticsFeatureCalculation : APOdmlAnalytics

+ (id)eventName;
+ (void)_analyticsSendEvent:(id)a0 eventPayload:(id)a1;
+ (id)_versionAndIdentifiersForNamespace:(id)a0;
+ (void)sendEvent:(id)a0 additionalDetails:(id)a1 isCounterfactual:(BOOL)a2;

@end
