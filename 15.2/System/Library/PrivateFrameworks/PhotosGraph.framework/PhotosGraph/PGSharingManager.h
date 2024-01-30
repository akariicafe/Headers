@class PGManagerWorkingContext;

@interface PGSharingManager : NSObject {
    PGManagerWorkingContext *_workingContext;
}

+ (id)_defaultOptions;

- (id)coreDuetStream;
- (void).cxx_destruct;
- (id)initWithWorkingContext:(id)a0;
- (id)presenceStream;
- (id)contextualStream;
- (id)learningStream;
- (id)suggestionSourcesForSharingStream:(unsigned long long)a0;
- (id)suggestionResultsForAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 options:(id)a2;
- (BOOL)canProvideSuggestionsWithOptions:(id)a0 forGraph:(id)a1;
- (BOOL)_canIncludeUnverified;
- (void)_mergeSuggestionResultByPersonIdentifer:(id)a0 withSourceSuggestionResults:(id)a1;
- (id)_filteredSuggestionResults:(id)a0 withOptions:(id)a1 graph:(id)a2;
- (id)_sortedSuggestionResults:(id)a0 withOptions:(id)a1;
- (id)_learningStreamUtils;

@end
