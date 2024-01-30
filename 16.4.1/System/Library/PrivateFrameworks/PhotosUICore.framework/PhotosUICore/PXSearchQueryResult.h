@class NSArray, PXSearchQuery, PHFetchResult, NSSet;

@interface PXSearchQueryResult : NSObject

@property (readonly, copy, nonatomic) PXSearchQuery *searchQuery;
@property (readonly, copy, nonatomic) NSArray *searchResults;
@property (readonly, copy, nonatomic) NSArray *searchAssetResults;
@property (readonly, copy, nonatomic) PHFetchResult *curatedAssetsFetchResult;
@property (readonly, copy, nonatomic) NSArray *searchSuggestions;
@property (readonly, copy, nonatomic) NSSet *sceneIdentifiers;
@property (readonly, copy, nonatomic) NSArray *matchedQueryStrings;
@property (readonly, copy, nonatomic) NSArray *matchedOCRAssetUUIDs;
@property (readonly, copy, nonatomic) NSArray *reloadItemIdentifiers;

- (void).cxx_destruct;
- (id)initEmptySearchQueryResultForQuery:(id)a0;
- (id)initWithSearchQuery:(id)a0 searchResults:(id)a1 searchAssetResults:(id)a2 curatedAssetsFetchResult:(id)a3 searchSuggestions:(id)a4 sceneIdentifiers:(id)a5 matchedQueryStrings:(id)a6 matchedOCRAssetUUIDs:(id)a7 reloadItemIdentifiers:(id)a8;

@end
