@interface PXResultRecord : NSObject <NSCopying>

- (BOOL)isCurated;
- (id)keyAssetsFetchResult;
- (BOOL)wantsCuration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fetchResult;
- (id)curatedFetchResult;
- (id)excludedOids;
- (id)description;
- (id)exposedFetchResult;
- (id)filteredFetchResult;
- (id)curatedOids;
- (id)inclusionPredicate;
- (BOOL)reverseSortOrder;
- (long long)keyAssetIndex;
- (id)includedOids;

@end
