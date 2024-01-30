@class NLTokenizer;

@interface NLLMSLanguageModelSession : NLLanguageModelSession {
    struct unique_ptr<language_modeling::LanguageModelSession, std::default_delete<language_modeling::LanguageModelSession>> { struct __compressed_pair<language_modeling::LanguageModelSession *, std::default_delete<language_modeling::LanguageModelSession>> { struct LanguageModelSession *__value_; } __ptr_; } _session;
    NLTokenizer *_tokenizer;
}

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (id)conditionalProbabilityForString:(id)a0 context:(id)a1;
- (id)conditionalProbabilityForToken:(id)a0 context:(id)a1;
- (id)initWithLanguageModel:(id)a0 options:(id)a1;
- (long long)blocklistStatusForString:(id)a0 matchType:(long long)a1;
- (void)adaptToToken:(id)a0 context:(id)a1;
- (void)unadaptToToken:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maximumPredictions:(unsigned long long)a1 maximumTokensPerPrediction:(unsigned long long)a2 withBlock:(id /* block */)a3;

@end
