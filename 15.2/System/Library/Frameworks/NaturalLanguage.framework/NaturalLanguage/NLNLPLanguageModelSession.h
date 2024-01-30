@interface NLNLPLanguageModelSession : NLLanguageModelSession {
    struct CoreLanguageModelWithState { } *_model;
}

- (id)description;
- (void)dealloc;
- (id)conditionalProbabilityForString:(id)a0 context:(id)a1;
- (id)stateWithOptions:(id)a0;
- (id)conditionalProbabilityForToken:(id)a0 context:(id)a1;
- (id)initWithLanguageModel:(id)a0 options:(id)a1;
- (id)conditionalProbabilitiesForStrings:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maximumPredictions:(unsigned long long)a1 maximumTokensPerPrediction:(unsigned long long)a2 withBlock:(id /* block */)a3;
- (id)predictionOptionsForMaximumPredictions:(unsigned long long)a0 maximumTokensPerPrediction:(unsigned long long)a1;
- (id)predictionInitialCharacterSet;

@end
