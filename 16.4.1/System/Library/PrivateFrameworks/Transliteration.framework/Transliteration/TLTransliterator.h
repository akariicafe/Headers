@interface TLTransliterator : NSObject {
    struct unique_ptr<TLCompositeTransliterator, std::default_delete<TLCompositeTransliterator>> { struct __compressed_pair<TLCompositeTransliterator *, std::default_delete<TLCompositeTransliterator>> { struct TLCompositeTransliterator *__value_; } __ptr_; } _compositeTransliterator;
}

- (id).cxx_construct;
- (id)initWithParameters:(id)a0;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)generateCandidatesForInputWord:(id)a0 candidateContext:(id)a1 maxCandidatesCount:(long long)a2;

@end
