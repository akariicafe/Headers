@class PGSuggestionOptions, NSArray, PGLongTailAdditionalOptions, NSDictionary, NSMutableSet, NSString;

@interface PGLongTailSuggester : PGAbstractSuggester {
    PGSuggestionOptions *_options;
    PGLongTailAdditionalOptions *_additionalOptions;
    unsigned long long _maximumNumberOfSuggestions;
    unsigned long long _numberOfGeneratedSuggestions;
    unsigned int _randomSeed;
    NSArray *_eligibleAssetUUIDs;
    NSDictionary *_verifiedPersonUUIDsByAssetUUIds;
    NSMutableSet *_suggestedAssetsFromPreviousBatch;
    NSMutableSet *_candidateAssetsFromPreviousBatch;
    NSString *_meNodeLocalIdentifier;
    double _topTierAestheticScoreThreshold;
}

+ (id)suggestionTypes;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)a0 seed:(unsigned int)a1;
+ (id)suggestionSubtypes;

- (void).cxx_destruct;
- (void)reset;
- (id)_assetUUIDByWeightedProbablisticSamplingFromAssetUUIDS:(id)a0 weights:(id)a1;
- (id)nextSuggestedAssetWithProgress:(id /* block */)a0;
- (id)_assetUUIDsFromAssets:(id)a0 atIndices:(id)a1;
- (id)_batchOfRandomAssetsWithCount:(unsigned long long)a0 progress:(id /* block */)a1;
- (id)_bestAssetUUIDsFromCandidates:(id)a0 percentile:(unsigned long long)a1;
- (id)_candidateByAssetUUIDsFromAssets:(id)a0;
- (id)_eligibleAssetUUIDsWithProgress:(id /* block */)a0;
- (id)_fetchVerifiedPersonUUIDsByAssetUUIds:(id)a0;
- (unsigned long long)_longTailScoreWithAsset:(id)a0 withAdditionalOptions:(id)a1;
- (id)_nextCandidateAssetsWithProgress:(id /* block */)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_randomRangeWithLocationUpperBound:(unsigned long long)a0 maxLength:(unsigned long long)a1;
- (BOOL)_shouldUsePreviousBatchOfCandidateAssets;
- (id)allInterestingMomentsFromGraph:(id)a0 progress:(id /* block */)a1;
- (BOOL)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (void)captureInformationFromGraph:(id)a0;
- (id)highlightedAssetInternalPredicate;
- (BOOL)isMomentNodeInteresting:(id)a0 withNeighborScoreComputer:(id)a1;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (id)reasonsForSuggestion:(id)a0;
- (void)startSuggestingWithOptions:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
