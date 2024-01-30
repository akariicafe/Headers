@interface NLLMSLanguageModel : NLLanguageModel {
    struct LanguageModel { struct unique_ptr<language_modeling::LanguageModelImpl, std::default_delete<language_modeling::LanguageModelImpl>> { struct __compressed_pair<language_modeling::LanguageModelImpl *, std::default_delete<language_modeling::LanguageModelImpl>> { struct LanguageModelImpl *__value_; } __ptr_; } m_impl; } _model;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)sessionWithOptions:(id)a0;
- (id)initWithLocalization:(id)a0 options:(id)a1;
- (BOOL)generatesPredictions;
- (void *)_underlyingModel;

@end
