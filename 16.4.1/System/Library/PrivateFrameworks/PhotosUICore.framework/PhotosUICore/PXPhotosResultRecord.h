@class PHFetchResult;

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (BOOL)isCurated;
- (id)inclusionPredicate;
- (id /* block */)curatedRefetchCondition;
- (id)exposedFetchResult;
- (long long)keyAssetIndex;
- (BOOL)reverseSortOrder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)curatedOids;
- (id)includedOids;
- (id)excludedOids;
- (id)filteredFetchResult;
- (BOOL)wantsCuration;
- (id)description;
- (id)curatedFetchResult;
- (BOOL)ensureKeyAssetAtBeginning;
- (id)keyAssetsFetchResult;
- (id)fetchResult;

@end
