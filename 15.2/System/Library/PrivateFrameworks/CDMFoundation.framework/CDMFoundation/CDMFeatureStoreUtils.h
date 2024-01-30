@interface CDMFeatureStoreUtils : NSObject

+ (BOOL)insertJsonStringToFeatureStore:(id)a0 interactionId:(id)a1 streamId:(id)a2 error:(id *)a3;
+ (BOOL)insertRequestToFeatureStore:(id)a0;
+ (BOOL)insertResponseToFeatureStore:(id)a0;
+ (BOOL)insertSpanMatchResponseToFeatureStore:(id)a0 interactionId:(id)a1 error:(id *)a2;
+ (BOOL)insertSNLCRequestToFeatureStore:(id)a0 interactionId:(id)a1 error:(id *)a2;
+ (BOOL)insertSNLCResponseToFeatureStore:(id)a0 interactionId:(id)a1 error:(id *)a2;

@end
