@interface NLNLPLanguageModel : NLLanguageModel {
    long long _granularity;
}

- (long long)granularity;
- (id)sessionWithOptions:(id)a0;
- (id)initWithLocalization:(id)a0 options:(id)a1;
- (double)conditionalProbabilityForEntry:(id)a0 context:(id)a1;
- (BOOL)generatesPredictions;
- (double)conditionalProbabilityForWord:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maxEntriesPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePredictionsForContext:(id)a0 maxWordsPerPrediction:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
