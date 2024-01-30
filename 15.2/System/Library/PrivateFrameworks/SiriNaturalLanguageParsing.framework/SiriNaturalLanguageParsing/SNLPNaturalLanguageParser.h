@interface SNLPNaturalLanguageParser : NSObject {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct NLv4InferenceOrchestrator *__value_; } __ptr_; } _cppOrchestrator;
}

+ (id)parserFromAssetDirectory:(id)a0 error:(id *)a1;
+ (id)parserFromSpansVocab:(id)a0 targetVocab:(id)a1 contextVocab:(id)a2 parserEncoder:(id)a3 parserDecoder:(id)a4 config:(id)a5 error:(id *)a6;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)inferenceResponseForRequest:(id)a0 error:(id *)a1;
- (id)_initWithCppOrchestrator:(struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct NLv4InferenceOrchestrator *x0; } x0; })a0;

@end
