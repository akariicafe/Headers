@interface CDMEmbeddingService : CDMDAGBaseService {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct EmbedderOrchestrator *__value_; } __ptr_; } _embedderOrchestrator;
}

+ (id)assetFolderName;
+ (id)trialFactorName;

- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;

@end
