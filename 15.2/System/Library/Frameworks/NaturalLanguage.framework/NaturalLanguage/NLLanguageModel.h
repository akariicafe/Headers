@class NSString, NLTokenizer, NLLexicon;

@interface NLLanguageModel : NSObject {
    NSString *_localization;
    void *_model;
    NLLexicon *_lexicon;
    NLTokenizer *_tokenizer;
}

@property (readonly, copy) NSString *localization;
@property (readonly, copy) NLLexicon *lexicon;

+ (id)languageModelWithOptions:(id)a0 error:(id *)a1;

- (id)languages;
- (id)locale;
- (id)description;
- (void).cxx_destruct;
- (long long)granularity;
- (void)dealloc;
- (id)language;
- (unsigned int)tokenIDForString:(id)a0;
- (id)stringForTokenID:(unsigned int)a0;
- (BOOL)getConditionalProbabilityForTokenID:(unsigned int)a0 context:(const unsigned int *)a1 length:(unsigned long long)a2 probability:(double *)a3;
- (id)sessionWithOptions:(id)a0;
- (id)tokenIDConverter;
- (id)initWithLocalization:(id)a0;
- (double)conditionalProbabilityForEntry:(id)a0 context:(id)a1;
- (BOOL)generatesPredictions;
- (double)conditionalProbabilityForWord:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maxEntriesPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePredictionsForContext:(id)a0 maxWordsPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
