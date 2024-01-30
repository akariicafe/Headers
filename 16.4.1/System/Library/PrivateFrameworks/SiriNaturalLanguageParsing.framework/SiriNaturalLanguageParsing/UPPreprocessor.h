@class NSLocale;

@interface UPPreprocessor : NSObject {
    const struct AbstractFeaturizer { void /* function */ **x0; } *__featurizer;
}

@property (readonly, nonatomic) NSLocale *locale;

+ (struct vector<nl_featurization::span_matching::MatchedSpan, std::allocator<nl_featurization::span_matching::MatchedSpan>> { struct MatchedSpan *x0; struct MatchedSpan *x1; struct __compressed_pair<nl_featurization::span_matching::MatchedSpan *, std::allocator<nl_featurization::span_matching::MatchedSpan>> { struct MatchedSpan *x0; } x2; })buildMatchedSpanListFromQuerySpans:(id)a0;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 featurizer:(const struct AbstractFeaturizer { void /* function */ **x0; } *)a1;
- (id)preprocess:(id)a0 error:(id *)a1;

@end
