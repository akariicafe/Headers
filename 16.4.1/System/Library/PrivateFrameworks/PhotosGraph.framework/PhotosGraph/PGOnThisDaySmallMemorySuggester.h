@class PGSuggestionOptions, NSIndexSet, NSString, NSArray, NSDictionary, NSEnumerator;

@interface PGOnThisDaySmallMemorySuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions *_options;
    NSArray *_suggestedMomentLocalIdentifiers;
    NSDictionary *_momentByMomentLocalIdentifier;
    NSEnumerator *_suggestedMomentLocalIdentifierEnumerator;
    NSString *_titleDateMatchingTitleOnThisDay;
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
- (id)sortedMomentLocalIdentifiersWithDateIgnoringYearBeforeDateYear:(id)a0;
- (id)momentByMomentLocalIdentifierWithMomentLocalIdentifiers:(id)a0;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (void)startSuggestingWithOptions:(id)a0;
- (id)suggestionWithMomentLocalIdentifier:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
