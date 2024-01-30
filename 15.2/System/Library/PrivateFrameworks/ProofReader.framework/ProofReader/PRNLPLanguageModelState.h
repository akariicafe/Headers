@class NSMutableDictionary, NLLanguageModelState, PRNLPLanguageModel;

@interface PRNLPLanguageModelState : NSObject {
    PRNLPLanguageModel *_languageModel;
    NLLanguageModelState *_state;
    NSMutableDictionary *_cachedPredictionsDictionary;
}

- (void)dealloc;
- (void)enumeratePredictions:(unsigned long long)a0 maxTokensPerPrediction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)conditionalProbabilityDictionaryForStrings:(id)a0;
- (id)initWithLanguageModel:(id)a0 state:(id)a1;
- (BOOL)getConditionalProbabilityForString:(id)a0 probability:(double *)a1;

@end
