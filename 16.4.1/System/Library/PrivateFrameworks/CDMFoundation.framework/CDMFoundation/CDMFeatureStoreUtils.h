@interface CDMFeatureStoreUtils : NSObject

+ (id)allowedFSMessagesOnExternalBuilds;
+ (BOOL)checkFeatureStoreEnabledForExternalBuilds:(id)a0;
+ (BOOL)insertJsonStringToFeatureStore:(id)a0 interactionId:(id)a1 streamId:(id)a2;
+ (BOOL)insertLVCRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertLVCResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertMDRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertMDResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertMRRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertMRResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertNLv4ParserRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertNLv4ParserResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertPSCRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertPSCResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertRequestToFeatureStoreAsJson:(id)a0;
+ (BOOL)insertResponseToFeatureStoreAsJson:(id)a0;
+ (BOOL)insertSNLCRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertSNLCResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertSpanMatchResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertTokenizerResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertUaaPParserRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)insertUaaPParserResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (BOOL)platformSupportedAndEnabled;

@end
