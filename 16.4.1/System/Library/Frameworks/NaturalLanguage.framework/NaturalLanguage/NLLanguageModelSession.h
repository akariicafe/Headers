@class NLLanguageModel;

@interface NLLanguageModelSession : NSObject

@property (readonly, retain, nonatomic) NLLanguageModel *languageModel;

+ (void)performMaintenance;
+ (void)setLogLevel:(long long)a0;

- (void).cxx_destruct;
- (void)reset;
- (void)adaptToText:(id)a0;
- (void)adaptToToken:(id)a0 context:(id)a1;
- (void)addPriorText:(id)a0 type:(long long)a1 time:(id)a2;
- (void)applyExponentialDecay;
- (long long)blocklistStatusForString:(id)a0 matchType:(long long)a1;
- (id)conditionalProbabilitiesForStrings:(id)a0 context:(id)a1;
- (id)conditionalProbabilitiesForTokens:(id)a0 context:(id)a1;
- (id)conditionalProbabilityForString:(id)a0 context:(id)a1;
- (id)conditionalProbabilityForToken:(id)a0 context:(id)a1;
- (void)enumeratePredictionsForContext:(id)a0 maximumPredictions:(unsigned long long)a1 maximumTokensPerPrediction:(unsigned long long)a2 withBlock:(id /* block */)a3;
- (void)flushDynamicData;
- (id)initWithLanguageModel:(id)a0 options:(id)a1;
- (void)pruneToSize:(unsigned long long)a0;
- (void)recordWithDifferentialPrivacy:(id)a0;
- (void)registerNegativeEvidenceForToken:(id)a0;
- (id)stateWithOptions:(id)a0;
- (void)unadaptToToken:(id)a0 context:(id)a1;

@end
