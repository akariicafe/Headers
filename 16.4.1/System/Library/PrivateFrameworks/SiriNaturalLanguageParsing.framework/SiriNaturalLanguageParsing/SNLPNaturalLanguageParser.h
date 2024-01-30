@interface SNLPNaturalLanguageParser : NSObject {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct NLv4InferenceOrchestrator *__value_; } __ptr_; } _cppOrchestrator;
}

+ (id)parserFromAssetDirectory:(id)a0 error:(id *)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithCppOrchestrator:(struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct NLv4InferenceOrchestrator *x0; } x0; })a0;
- (id)inferenceResponseForRequest:(id)a0 error:(id *)a1;

@end
