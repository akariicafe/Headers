@class NSString;

@interface _CNAutocompleteNonCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localSearch;
- (id)calendarServerSearch;
- (id)directoryServerSearch;
- (id)localExtensionSearches;
- (id)predictionSearch;
- (id)recentsSearch;
- (id)stewieSearch;
- (id)suggestionsSearch;

@end
