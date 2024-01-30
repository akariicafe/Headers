@class NSString, GEOMapServiceTraits;

@interface _GEOFailedCompletionTicket : _GEOFailedTicket <GEOMapServiceCompletionTicket> {
    NSString *searchQuery;
}

@property (readonly, nonatomic, getter=_searchQuery) NSString *searchQuery;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void)applyToCorrectedSearch:(id)a0;
- (long long)highlightType;
- (void)applyToPlaceInfo:(id)a0;
- (void).cxx_destruct;
- (void)applyToSuggestionEntry:(id)a0 withAutocompleteSearchResultIdentifier:(id)a1;
- (void)applyToSuggestionList:(id)a0;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (id)clientRankingModel;
- (BOOL)enableStructuredRAPAffordance;
- (BOOL)hasShouldDisplayNoResults;
- (BOOL)hasShouldEnableGrayscaleHighlighting;
- (id)initWithError:(id)a0 searchQuery:(id)a1 traits:(id)a2;
- (BOOL)matchesFragment:(id)a0;
- (id)placeSummaryLayoutMetadata;
- (double)retainSearchTime;
- (BOOL)shouldDisplayNoResults;
- (BOOL)shouldEnableGrayscaleHighlighting;
- (BOOL)shouldUseDistanceFeatureServerResults;
- (BOOL)showAutocompleteClientSource;
- (id)sortPriorityMapping;
- (void)submitWithAutoCompletionHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;

@end
