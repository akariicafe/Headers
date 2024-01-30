@class CDMEmbeddingConfigs, NSMutableArray;

@interface CDMEmbeddingProtoService : CDMDAGBaseService {
    NSMutableArray *_embedders;
    CDMEmbeddingConfigs *_embeddingConfigs;
}

+ (BOOL)isSiriInputRepresentationModel:(id)a0;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (long long)getServiceState;
- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)createEmbedderOrchestrator:(id)a0;
- (id)createEmbedderOrchestrator:(id)a0 embedding_bert_path:(id)a1 embedding_config_path:(id)a2 reformulation_path:(id)a3;
- (id)createEmbeddingProtoServiceErrorWithCode:(long long)a0 description:(id)a1;
- (id)createEmbeddingsBundleMissingPathResponse;
- (id)createEmptyEmbeddingsBundleResponse:(id)a0;
- (id)createNoStableEmbeddingsModelFoundResponse;
- (id)createNotReadyForHandleProtoResponse;
- (id)createOrchestratorConstructFailureResponse;
- (id)doEmbedding:(id)a0;
- (id)handleRequestCommandTypeNames;
- (BOOL)hasEmbedderOrchestrator;
- (id)legacyEmbeddingPaths:(id)a0;
- (void)setEmbedders:(id)a0;

@end
