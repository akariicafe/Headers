@class NSSet, NSPredicate, PHFetchResult;

@interface PXMutableResultRecord : PXResultRecord {
    PHFetchResult *_filteredFetchResult;
    NSPredicate *_inclusionPredicate;
    BOOL _filteredFetchResultIsValid;
    BOOL _inclusionPredicateIsValid;
}

@property (readonly, nonatomic) NSSet *excludedOids;
@property (readonly, nonatomic) NSSet *includedOids;
@property (readonly, nonatomic) NSSet *curatedOids;
@property (readonly, nonatomic) NSPredicate *inclusionPredicate;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) BOOL reverseSortOrder;
@property (retain, nonatomic) PHFetchResult *curatedFetchResult;
@property (retain, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic) long long keyAssetIndex;
@property (nonatomic) BOOL wantsCuration;
@property (readonly, nonatomic) BOOL isCurated;
@property (readonly, nonatomic) PHFetchResult *filteredFetchResult;
@property (readonly, nonatomic) PHFetchResult *exposedFetchResult;
@property (nonatomic) BOOL preloadAssetTypeCounts;

- (void)stopExcludingOids:(id)a0;
- (void)includeOids:(id)a0;
- (void)setFetchResult:(id)a0;
- (void)_invalidateInclusionPredicate;
- (void)stopIncludingAllOids;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setReverseSortOrder:(BOOL)a0;
- (void)_updateFilteredFetchResultIfNeeded;
- (id)_exposedFetchResultBeforeFiltering;
- (void)invalidateFetchResultAssetCache;
- (void)_setIncludeOids:(id)a0;
- (void)_invalidateFilteredFetchResult;
- (void)setFetchResult:(id)a0 reverseSortOrder:(BOOL)a1;
- (void)_invalidateKeyAssetIndex;
- (void)excludeOids:(id)a0;

@end
