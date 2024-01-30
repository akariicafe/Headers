@interface SPSuggestionsQueryTask : SPGeneralQueryTask

- (id)displayedText;
- (id)unsafeSections;
- (BOOL)readyToUpdate;
- (id)initForSession:(id)a0 withQuery:(id)a1;
- (void)clearInternal:(int)a0 invalidate:(BOOL)a1;
- (void)processAppResults:(id)a0 maxAppResults:(unsigned long long)a1 section:(id)a2 topHitsIndex:(unsigned long long *)a3;
- (id)showMoreButtonResultSection;
- (void)addAsYouTypeRelatedSearchResultToSections:(id)a0 withRelatedSearchSection:(id)a1;
- (id)makeSearchThroughSuggestions;
- (id)committedSearchSections;
- (id)_appResultSection;
- (id)searchThroughSection:(id)a0;
- (id)bundleIdentifiersForHiddenSections;
- (id)_newSuggestionSection;
- (id)sectionsForCompletions;
- (id)_topResultOnlySectionFrom:(id)a0;
- (id)_allowListedTopResultFromSection:(id)a0;
- (id)_originalTopResultFromSections:(id)a0;

@end
