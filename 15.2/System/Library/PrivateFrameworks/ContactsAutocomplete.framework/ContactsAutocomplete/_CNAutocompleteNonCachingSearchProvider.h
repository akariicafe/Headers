@class NSString;

@interface _CNAutocompleteNonCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localSearch;
- (id)recentsSearch;
- (id)suggestionsSearch;
- (id)predictionSearch;
- (id)localExtensionSearches;
- (id)directoryServerSearch;
- (id)calendarServerSearch;

@end
