@class NSString, NSDictionary, GEOMapServiceTraits;

@interface _GEOFailedCompletionTicket : _GEOFailedTicket <GEOMapServiceCompletionTicket> {
    NSString *searchQuery;
}

@property (readonly, nonatomic, getter=_searchQuery) NSString *searchQuery;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (long long)highlightType;
- (void)applyToPlaceInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRapEnabled;
- (id)placeSummaryLayoutMetadata;
- (void)applyToSuggestionList:(id)a0;
- (BOOL)matchesFragment:(id)a0;
- (double)retainSearchTime;
- (BOOL)shouldDisplayNoResults;
- (id)initWithError:(id)a0 searchQuery:(id)a1 traits:(id)a2;
- (id)clientRankingModel;
- (void)submitWithAutoCompletionHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (BOOL)hasShouldEnableGrayscaleHighlighting;
- (void)applyToSuggestionEntry:(id)a0 withAutocompleteSearchResultIdentifier:(id)a1;
- (BOOL)hasShouldDisplayNoResults;
- (BOOL)shouldEnableGrayscaleHighlighting;
- (id)sortPriorityMapping;
- (BOOL)showAutocompleteClientSource;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (BOOL)shouldUseDistanceFeatureServerResults;
- (void)applyToCorrectedSearch:(id)a0;

@end
