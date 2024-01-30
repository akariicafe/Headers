@class NSString, _ICPredictionManager, NSObject;
@protocol _ICLexiconManaging;

@interface _ICInputContextManager : NSObject <_ICPredictionManaging, _ICLexiconManaging, _ICFeedbackManaging> {
    struct _LXLexicon { } *_durableNamedEntityLexicon;
    struct _LXLexicon { } *_recentNamedEntityLexicon;
    NSObject<_ICLexiconManaging> *_lexiconManager;
    _ICPredictionManager *_predictionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)warmUp;
- (id)loadLexicons:(id /* block */)a0;
- (void).cxx_destruct;
- (id)searchWithTriggers:(id)a0 application:(id)a1 recipient:(id)a2 localeIdentifier:(id)a3 timeoutInMilliseconds:(int)a4 resultLimit:(int)a5 error:(id *)a6;
- (void)reset;
- (id)searchForMeCardRegions;
- (id)searchForMeCardEmailAddresses;
- (void)hibernate;
- (id)getPredictionManager;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)unloadLexicons;
- (void)providePredictionFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (id)getLexiconManager;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (void)initLexiconManager;
- (void)provideLexiconFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)doInitPredictionManager;
- (id)lastCachedResultWithInitialCharacters:(id)a0;
- (void)doInitLexiconManager;
- (void)initPredictionManager;
- (id)initWithPredictionSource:(id)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)predictedItemSelected:(id)a0;
- (id)initForIntegrationTesting;

@end
