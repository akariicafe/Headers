@class NSArray, NSString, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PSIGroupResultDelegate;

@interface PSIGroupResult : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    NSMutableArray *_collectionResults;
    BOOL _didFetchOwningContentString;
    NSMutableSet *_sceneGroupsIds;
}

@property (copy, nonatomic) NSArray *groups;
@property (retain, nonatomic) const struct __CFArray { } *assetIds;
@property (retain, nonatomic) const struct __CFArray { } *collectionIds;
@property (nonatomic) float score;
@property (nonatomic) short dedupingSkippedCategory;
@property (readonly) NSMutableSet *sceneGroupsIds;
@property (weak, nonatomic) id<PSIGroupResultDelegate> delegate;
@property (readonly, nonatomic) NSArray *groupsSearchTokens;
@property (readonly, nonatomic) NSArray *contentStrings;
@property (readonly, nonatomic) NSArray *lookupIdentifiers;
@property (readonly, nonatomic) NSArray *groupsMatchRanges;
@property (copy, nonatomic) NSString *transientToken;
@property (readonly, nonatomic) BOOL isDateFilterPartiallyFromFullSearchText;
@property (readonly, nonatomic) BOOL hasDateFilterFromImplicitToken;
@property (readonly, nonatomic) unsigned long long matchCount;
@property (readonly, nonatomic) unsigned long long assetMatchCount;
@property (readonly, nonatomic) unsigned long long collectionMatchCount;
@property (readonly, nonatomic) BOOL containsFilterSearchTokens;
@property (readonly, weak) NSString *owningContentString;
@property (readonly, weak) NSArray *assetUUIDs;
@property (readonly, weak) NSArray *collectionResults;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)groupCount;
- (void)dealloc;
- (void)fetchNextAssetUUIDs:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (long long)categoryAtIndex:(long long)a0;
- (id)normalizedUnitTestDescription;
- (id)contentStringAtIndex:(long long)a0;
- (id)_prepareForFetchWithAssetCountLimit:(unsigned long long)a0 collectionCountLimit:(unsigned long long)a1 outAssetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 outCollectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 outFetchOwningContentString:(BOOL *)a4;
- (void)fetchNextAssetUUIDs:(BOOL)a0 collectionResults:(BOOL)a1 count:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchNextAssetUUIDs:(BOOL)a0 collectionResults:(BOOL)a1 assetCountLimit:(unsigned long long)a2 collectionCountLimit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)tokensAtIndex:(long long)a0;
- (id)matchRangesAtIndex:(long long)a0;
- (BOOL)isContentStringTextSearchableAtIndex:(long long)a0;
- (BOOL)isMatchedByIdentifierAtIndex:(long long)a0;
- (id)description;
- (id)unitTestDescription;
- (id)lookupIdentifiersForSearchIndexCategories:(id)a0;
- (void)resolveObjectsWithAssetCache:(id)a0 collectionCache:(id)a1;
- (id)fullSearchTextGroupSnapshot;
- (id)normalizedStringAtIndex:(long long)a0;
- (id)groupRangesAtIndex:(long long)a0;
- (id)dateFilterGroupSnapshot;
- (id)debugDescription;
- (id)firstSearchTextGroupSnapshot;

@end
