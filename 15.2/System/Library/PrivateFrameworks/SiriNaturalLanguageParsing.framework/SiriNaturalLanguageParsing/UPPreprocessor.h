@class UPTokenizer, NSLocale;

@interface UPPreprocessor : NSObject {
    const struct AbstractFeaturizer { void /* function */ **x0; } *__featurizer;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) UPTokenizer *tokenizer;
@property (readonly) BOOL isPLUMEnabled;

- (void).cxx_destruct;
- (id)preprocess:(id)a0 error:(id *)a1;
- (id)initWithLocale:(id)a0 tokenizer:(id)a1 isPLUMEnabled:(BOOL)a2 featurizer:(const struct AbstractFeaturizer { void /* function */ **x0; } *)a3;

@end
