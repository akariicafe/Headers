@class PHFetchResult;

@interface PXResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (BOOL)isCurated;
- (id)keyAssetsFetchResult;
- (id)curatedFetchResult;
- (id)filteredFetchResult;
- (id)fetchResult;
- (BOOL)wantsCuration;
- (id)description;
- (id /* block */)curatedRefetchCondition;
- (BOOL)reverseSortOrder;
- (id)excludedOids;
- (BOOL)ensureKeyAssetAtBeginning;
- (id)inclusionPredicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)keyAssetIndex;
- (id)includedOids;
- (id)curatedOids;
- (id)exposedFetchResult;

@end
