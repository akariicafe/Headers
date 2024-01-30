@class PGSuggestionOptions, NSIndexSet, NSString, NSArray, NSMutableSet, NSEnumerator;

@interface PGRecentSocialGroupCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions *_options;
    NSArray *_allPotentialSuggestions;
    NSMutableSet *_usedPotentialSuggestions;
    NSArray *_longTimeNoSeeSocialGroupPotentialSuggestions;
    NSArray *_socialGroupPotentialSuggestions;
    NSEnumerator *_longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;
    NSEnumerator *_socialGroupPotentialSuggestionEnumerator;
    NSArray *_eligibleAssets;
}

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)verifiedPersons;
- (id)assetsMatchingSocialGroup:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2 matchingAssetUUID:(id)a3;
- (id)assetsWithPersonsBetweenStartDate:(id)a0 andEndDate:(id)a1 matchAssetUUID:(id)a2;
- (BOOL)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)nextLongTimeNoSeeSocialGroupPotentialSuggestionWithProgress:(id /* block */)a0;
- (id)nextSocialGroupPotentialSuggestionWithProgress:(id /* block */)a0;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (id)potentialSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)socialGroupPotentialSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (void)startSuggestingWithOptions:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (void)usePotentialSuggestions:(id)a0;

@end
