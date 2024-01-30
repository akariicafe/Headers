@interface SNLPServerNLClassifier : NSObject {
    struct unique_ptr<snlc_inference_orchestrator::orchestration::SNLCOrchestrator, std::default_delete<snlc_inference_orchestrator::orchestration::SNLCOrchestrator>> { struct __compressed_pair<snlc_inference_orchestrator::orchestration::SNLCOrchestrator *, std::default_delete<snlc_inference_orchestrator::orchestration::SNLCOrchestrator>> { struct SNLCOrchestrator *__value_; } __ptr_; } _snlcOrchestrator;
    struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct SNLPAssetLogger *__value_; } __ptr_; } _assetLogger;
    BOOL _hasVersionInfo;
}

+ (id)classifierWithPathURL:(id)a0 error:(id *)a1;
+ (id)_classifierWithPathURL:(id)a0 shouldExpectVersionInfo:(BOOL)a1 error:(id *)a2;
+ (id)_classifierWithModelURL:(id)a0 configURL:(id)a1 spanVocabularyURL:(id)a2 contextVocabularyURL:(id)a3 versionURL:(id)a4 error:(id *)a5;
+ (id)_errorForMissingResourceURL:(id)a0;
+ (struct unique_ptr<const sirinluinternalsnlc::SNLCParserRequest, std::default_delete<const sirinluinternalsnlc::SNLCParserRequest>> { struct __compressed_pair<const sirinluinternalsnlc::SNLCParserRequest *, std::default_delete<const sirinluinternalsnlc::SNLCParserRequest>> { struct SNLCParserRequest *x0; } x0; })_convertRequest:(id)a0;
+ (id)_responseForSNLCResponse:(struct SNLCParserResponse { void /* function */ **x0; int x1; float x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x3; })a0;
+ (id)classifierWithModelURL:(id)a0 configURL:(id)a1 spanVocabularyURL:(id)a2 contextVocabularyURL:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)inferenceResponseForRequest:(id)a0 error:(id *)a1;
- (id)inferenceResponseForRequest:(id)a0;
- (BOOL)_hasVersionInfo;
- (id)_initWithModelURL:(id)a0 configURL:(id)a1 spanVocabularyURL:(id)a2 contextVocabularyURL:(id)a3 versionURL:(id)a4 error:(id *)a5;

@end
