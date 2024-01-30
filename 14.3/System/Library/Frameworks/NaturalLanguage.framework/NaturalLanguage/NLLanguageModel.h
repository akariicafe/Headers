@class NSString, NLTokenizer, NLLexicon;

@interface NLLanguageModel : NSObject {
    NSString *_localization;
    void *_model;
    NLLexicon *_lexicon;
    NLTokenizer *_tokenizer;
}

@property (readonly, copy) NSString *localization;
@property (readonly, copy) NLLexicon *lexicon;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)getConditionalProbabilityForTokenID:(unsigned int)a0 context:(const unsigned int *)a1 length:(unsigned long long)a2 probability:(double *)a3;
- (id)initWithLocalization:(id)a0;
- (double)conditionalProbabilityForEntry:(id)a0 context:(id)a1;
- (double)conditionalProbabilityForWord:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maxEntriesPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePredictionsForContext:(id)a0 maxWordsPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
