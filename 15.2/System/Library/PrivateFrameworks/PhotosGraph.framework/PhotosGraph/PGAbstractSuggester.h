@class NSIndexSet, NSString, PGSuggestionSession;

@interface PGAbstractSuggester : NSObject <PGSuggester>

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (weak, nonatomic) PGSuggestionSession *session;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggesterWithSession:(id)a0;
+ (BOOL)lastSuggestionWasColliding;
+ (void)setLastSuggestionWasColliding:(BOOL)a0;
+ (id)noVideoPredicate;
+ (BOOL)hasInterestingScenesWithAsset:(id)a0;
+ (id)internalPredicateForProcessedAssetsWithMinimumSceneAnalysisVersion:(unsigned long long)a0;
+ (id)sharingSuggestionResultsForMomentNodes:(id)a0 withWorkingContext:(id)a1;
+ (id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)a0 forMomentNodes:(id)a1 containsUnverifiedPersons:(BOOL *)a2;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)reasonsForSuggestion:(id)a0;
- (BOOL)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (BOOL)assetIsValidForSuggesting:(id)a0;
- (double)userFeedbackScoreWithAsset:(id)a0;
- (BOOL)processedAssetIsValidForSuggesting:(id)a0 allowGuestAsset:(BOOL)a1;
- (id)defaultAssetFetchOptionsWithInternalPredicate:(id)a0;

@end
