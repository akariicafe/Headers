@interface SNLPEmbedder : NSObject {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct EmbedderOrchestrator *__value_; } __ptr_; } _cppOrchestrator;
}

+ (id)convertCppSubwordTokenChainToObjC:(struct SubwordTokenChain { void /* function */ **x0; struct unique_ptr<std::string, std::default_delete<std::string>> { struct __compressed_pair<std::string *, std::default_delete<std::string>> { void *x0; } x0; } x1; struct PtrVector<sirinluinternal::SubwordToken> { struct vector<std::unique_ptr<sirinluinternal::SubwordToken>, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<sirinluinternal::SubwordToken> *, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> { void *x0; } x2; } x0; } x2; })a0;

- (void)warmup;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getEmbeddings:(id)a0;
- (id)getEmbeddingsBySentence:(id)a0;
- (id)initFromAssetDirectoryURL:(id)a0;
- (id)initFromSourceVocabPath:(id)a0 bertModelPath:(id)a1 bertConfigPath:(id)a2 reformulatorPath:(id)a3;

@end
