@interface APOdmlAnalytics : NSObject

+ (void)sendEventFeatureCalculation:(long long)a0 error:(id)a1;
+ (id)versionAndIdentifiersFromRecordInfo:(id)a0 isCounterfactual:(BOOL)a1;
+ (void)sendEventDesRecordLogging:(long long)a0 error:(id)a1;
+ (void)sendEventFeatureStorage:(long long)a0 error:(id)a1;
+ (void)_analyticsSendEvent:(id)a0 eventPayload:(id)a1;
+ (id)versionAndIdentifiers;
+ (void)sendEventModelTraining:(long long)a0 recordInfo:(id)a1 isCounterfactual:(BOOL)a2 numOfRows:(unsigned long long)a3 normDelta:(double)a4 error:(id)a5;
+ (void)sendEventReranking:(long long)a0 startDate:(id)a1 endDate:(id)a2 error:(id)a3;
+ (void)sendEventPrediction:(long long)a0 error:(id)a1;

@end
