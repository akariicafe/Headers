@interface NLTokenIDBasedLanguageModelSession : NLLanguageModelSession

- (void)adaptToTokenID:(unsigned int)a0 contextTokenIDs:(const unsigned int *)a1 length:(unsigned long long)a2;
- (long long)blocklistStatusForTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1 matchType:(long long)a2;
- (id)conditionalProbabilitiesForTokenIDs:(const unsigned int *)a0 count:(unsigned long long)a1 contextTokenIDs:(const unsigned int *)a2 length:(unsigned long long)a3;
- (id)conditionalProbabilityForTokenID:(unsigned int)a0 contextTokenIDs:(const unsigned int *)a1 length:(unsigned long long)a2;
- (void)enumeratePredictionsForContextTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1 maximumPredictions:(unsigned long long)a2 maximumTokensPerPrediction:(unsigned long long)a3 withBlock:(id /* block */)a4;
- (id)stateWithOptions:(id)a0;
- (void)unadaptToTokenID:(unsigned int)a0 contextTokenIDs:(const unsigned int *)a1 length:(unsigned long long)a2;

@end
