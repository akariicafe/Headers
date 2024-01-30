@class NSString;
@protocol CNFuture;

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {
    id<CNFuture> _localSearchFuture;
    id<CNFuture> _recentsSearchFuture;
    id<CNFuture> _suggestionsSearchFuture;
    id<CNFuture> _predictionSearchFuture;
    id<CNFuture> _localExtensionSearchesFuture;
    id<CNFuture> _directoryServerSearchFuture;
    id<CNFuture> _calendarServerSearchFuture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)localSearch;
- (id)initWithSearchProvider:(id)a0;
- (id)recentsSearch;
- (id)suggestionsSearch;
- (id)predictionSearch;
- (id)localExtensionSearches;
- (id)directoryServerSearch;
- (id)calendarServerSearch;

@end
