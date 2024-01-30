@class PGSuggestionOptions, NSIndexSet, NSString, NSDictionary, NSMutableSet, NSArray, NSEnumerator;

@interface PGRecentPersonCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions *_options;
    NSDictionary *_verifiedPersonByPersonLocalIdentifier;
    NSDictionary *_assetsByPersonLocalIdentifier;
    NSMutableSet *_usedPersonLocalIdentifiers;
    NSArray *_birthdayPersonPotentialSuggestions;
    NSArray *_longTimeNoSeePersonPotentialSuggestions;
    NSArray *_personPotentialSuggestions;
    NSEnumerator *_birthdayPersonPotentialSuggestionEnumerator;
    NSEnumerator *_longTimeNoSeePersonPotentialSuggestionEnumerator;
    NSEnumerator *_personPotentialSuggestionEnumerator;
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
- (id)assetsByPersonLocalIdentifierWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)assetsWithSinglePersonBetweenStartDate:(id)a0 andEndDate:(id)a1 matchingAssetUUID:(id)a2 progress:(id /* block */)a3;
- (id)assetsWithSinglePersonWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)birthdayPersonPotentialSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (BOOL)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (id)lastAssetWithPerson:(id)a0 beforeDate:(id)a1 matchingAssetUUID:(id)a2;
- (id)longTimeNoSeePersonPotentialSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)nextBirthdayPersonPotentialSuggestionWithProgress:(id /* block */)a0;
- (id)nextLongTimeNoSeePersonPotentialSuggestionWithProgress:(id /* block */)a0;
- (id)nextPersonPotentialSuggestionWithProgress:(id /* block */)a0;
- (id)nextPotentialSuggestionWithProgress:(id /* block */)a0;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (id)personPotentialSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (unsigned long long)relationScoreWithPersonNode:(id)a0;
- (void)startSuggestingWithOptions:(id)a0;
- (id)suggestionWithPotentialSuggestion:(id)a0 progress:(id /* block */)a1;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (void)updateUsedPersonLocalIdentifiersFromPotentialSuggestions:(id)a0;
- (id)verifiedPersonByPersonLocalIdentifier;

@end
