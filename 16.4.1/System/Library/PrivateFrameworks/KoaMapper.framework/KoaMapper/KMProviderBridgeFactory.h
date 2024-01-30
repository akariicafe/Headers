@interface KMProviderBridgeFactory : NSObject

- (id)bridgeForOriginAppId:(id)a0;
- (id)bridgeForOriginAppId:(id)a0 languageCode:(id)a1;
- (id)globalTermMultiDatasetBridgeWithModifiedOriginAppIds:(id)a0 deletedOriginAppIds:(id)a1 languageCode:(id)a2;
- (id)intentVocabularyMultiDatasetBridge;

@end
