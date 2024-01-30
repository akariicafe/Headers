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

- (void).cxx_destruct;
- (void)applyToCorrectedSearch:(id)a0;
- (BOOL)shouldDisplayNoResults;
- (double)retainSearchTime;
- (BOOL)hasShouldDisplayNoResults;
- (BOOL)isRapEnabled;
- (BOOL)matchesFragment:(id)a0;
- (id)initWithError:(id)a0 searchQuery:(id)a1 traits:(id)a2;
- (void)submitWithAutoCompletionHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)applyToSuggestionList:(id)a0;
- (void)applyToSuggestionEntry:(id)a0 withAutocompleteSearchResultIdentifier:(id)a1;
- (id)clientRankingModel;
- (id)sortPriorityMapping;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (BOOL)showAutocompleteClientSource;
- (void)applyToPlaceInfo:(id)a0;

@end
