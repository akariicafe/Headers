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

- (void)hibernate;
- (id)searchWithTriggers:(id)a0 application:(id)a1 recipient:(id)a2 localeIdentifier:(id)a3 isResponseDenyListed:(BOOL)a4 shouldDisableAutoCaps:(BOOL)a5 timeoutInMilliseconds:(int)a6 resultLimit:(int)a7 error:(id *)a8;
- (void)providePredictionFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)lastCachedResultWithInitialCharacters:(id)a0;
- (void)unloadLexicons;
- (id)searchWithTriggers:(id)a0 application:(id)a1 recipient:(id)a2 localeIdentifier:(id)a3 timeoutInMilliseconds:(int)a4 resultLimit:(int)a5 error:(id *)a6;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (id)searchForMeCardRegions;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)warmUp;
- (id)loadLexicons;
- (void)predictedItemSelected:(id)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (id)loadLexicons:(id /* block */)a0;
- (id)searchForMeCardEmailAddresses;
- (void).cxx_destruct;
- (void)reset;
- (void)doInitLexiconManager;
- (void)doInitPredictionManager;
- (id)getLexiconManager;
- (id)getPredictionManager;
- (id)initForIntegrationTesting;
- (void)initLexiconManager;
- (void)initPredictionManager;
- (id)initWithPredictionSource:(id)a0;
- (void)provideLexiconFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;

@end
