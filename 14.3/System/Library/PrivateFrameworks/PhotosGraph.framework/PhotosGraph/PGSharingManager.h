@class PGManager, NSObject;
@protocol OS_os_log;

@interface PGSharingManager : NSObject {
    PGManager *_manager;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)_defaultOptions;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (id)coreDuetStream;
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
- (id)_learningStreamUtilsWithGraph:(id)a0;

@end
