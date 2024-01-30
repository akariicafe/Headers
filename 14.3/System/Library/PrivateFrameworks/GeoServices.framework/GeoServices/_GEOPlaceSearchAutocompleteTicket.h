@class NSString, NSDictionary, GEOMapServiceTraits, GEOAutocompleteSessionData;

@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket> {
    GEOAutocompleteSessionData *_sessionData;
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
- (BOOL)shouldDisplayNoResults;
- (double)retainSearchTime;
- (BOOL)hasShouldDisplayNoResults;
- (BOOL)isRapEnabled;
- (BOOL)matchesFragment:(id)a0;
- (void)submitWithAutoCompletionHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)applyToSuggestionList:(id)a0;
- (void)applyToSuggestionEntry:(id)a0 withAutocompleteSearchResultIdentifier:(id)a1;
- (id)clientRankingModel;
- (id)sortPriorityMapping;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (BOOL)showAutocompleteClientSource;
- (void)submitWithAutoCompletionHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2;
- (id)initWithRequest:(id)a0 traits:(id)a1 searchQuery:(id)a2 sessionData:(id)a3;

@end
