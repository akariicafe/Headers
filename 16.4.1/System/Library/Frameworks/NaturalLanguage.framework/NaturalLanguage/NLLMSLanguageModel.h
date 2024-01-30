@interface NLLMSLanguageModel : NLLanguageModel {
    struct LanguageModel { struct unique_ptr<language_modeling::LanguageModelImpl, std::default_delete<language_modeling::LanguageModelImpl>> { struct __compressed_pair<language_modeling::LanguageModelImpl *, std::default_delete<language_modeling::LanguageModelImpl>> { struct LanguageModelImpl *__value_; } __ptr_; } m_impl; } _model;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)_underlyingModel;
- (BOOL)generatesPredictions;
- (id)initWithLocalization:(id)a0 options:(id)a1;
- (id)sessionWithOptions:(id)a0;

@end
