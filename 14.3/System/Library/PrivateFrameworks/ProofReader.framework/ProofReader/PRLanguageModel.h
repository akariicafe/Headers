@class NSString, PRLexicon;

@interface PRLanguageModel : NSObject {
    NSString *_localization;
    NSString *_appIdentifier;
    void *_model;
    PRLexicon *_lexicon;
}

+ (void)setLogLevel:(long long)a0;
+ (void)performMaintenance;
+ (id)languageModelWithLocalization:(id)a0 appIdentifier:(id)a1 lexicon:(id)a2;

- (id)appIdentifier;
- (void)enumerateCompletionsForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)reset;
- (void)dealloc;
- (id)stringForTokenID:(unsigned int)a0;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)localization;
- (id)description;
- (void)enumerateCompletionEntriesForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (unsigned int)tokenIDForString:(id)a0;
- (void)flushDynamicData;
- (BOOL)tokenSequenceIsBlocklisted:(const unsigned int *)a0 length:(unsigned long long)a1;
- (void)enumeratePredictionsForContext:(const unsigned int *)a0 length:(unsigned long long)a1 maxPredictions:(unsigned long long)a2 maxTokensPerPrediction:(unsigned long long)a3 withBlock:(id /* block */)a4;
- (BOOL)getUnigramProbabilityForString:(id)a0 probability:(double *)a1;
- (BOOL)getConditionalProbabilityForTokenID:(unsigned int)a0 context:(const unsigned int *)a1 length:(unsigned long long)a2 probability:(double *)a3;
- (BOOL)getFirstDynamicTokenID:(unsigned int *)a0 lastDynamicTokenID:(unsigned int *)a1;
- (float)usageCountForTokenID:(unsigned int)a0;
- (id)initWithLocalization:(id)a0 appIdentifier:(id)a1 lexicon:(id)a2;
- (id)_descriptionForTokenSequence:(const unsigned int *)a0 length:(unsigned long long)a1;
- (BOOL)addTokenForString:(id)a0 tokenID:(unsigned int *)a1;
- (BOOL)shouldAdaptToTokenSequence:(const unsigned int *)a0 length:(unsigned long long)a1;
- (void)incrementUsageCountForTokenID:(unsigned int)a0 context:(const unsigned int *)a1 length:(unsigned long long)a2;
- (void)recordWithDifferentialPrivacy:(id)a0;
- (void)countDynamicNgramsForOrder:(unsigned long long)a0 threshold:(float)a1 dynamicModelCount:(unsigned long long *)a2 cacheCount:(unsigned long long *)a3;
- (void)applyExponentialDecay;
- (void)pruneToSize:(unsigned long long)a0;

@end
