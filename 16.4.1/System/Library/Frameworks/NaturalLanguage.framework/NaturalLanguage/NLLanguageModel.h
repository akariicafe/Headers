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
- (long long)granularity;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)language;
- (id)locale;
- (BOOL)getConditionalProbabilityForTokenID:(unsigned int)a0 context:(const unsigned int *)a1 length:(unsigned long long)a2 probability:(double *)a3;
- (double)conditionalProbabilityForEntry:(id)a0 context:(id)a1;
- (double)conditionalProbabilityForWord:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maxEntriesPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePredictionsForContext:(id)a0 maxWordsPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)generatesPredictions;
- (id)initWithLocalization:(id)a0;
- (id)sessionWithOptions:(id)a0;
- (id)stringForTokenID:(unsigned int)a0;
- (id)tokenIDConverter;
- (unsigned int)tokenIDForString:(id)a0;

@end
