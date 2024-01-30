@class NSMutableDictionary, NLLanguageModelState, PRNLPLanguageModel;

@interface PRNLPLanguageModelState : NSObject {
    NLLanguageModelState *_state;
    NSMutableDictionary *_cachedPredictionsDictionary;
}

@property (readonly, nonatomic) PRNLPLanguageModel *languageModel;

- (void)dealloc;
- (id)conditionalProbabilityDictionaryForStrings:(id)a0;
- (void)enumeratePredictions:(unsigned long long)a0 maxTokensPerPrediction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (BOOL)getConditionalProbabilityForString:(id)a0 probability:(double *)a1;
- (id)initWithLanguageModel:(id)a0 state:(id)a1;

@end
