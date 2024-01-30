@class NSDictionary, TRIGenericRequiredAssets;

@interface TRIFactorPackAssetFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) TRIGenericRequiredAssets *metadataForRequestedUnlinkedAssets;
@property (readonly, nonatomic) NSDictionary *recordIdsForDiffableAssetIds;
@property (readonly, nonatomic) NSDictionary *recordIdsForNonDiffableAssetIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)a0 recordIdsForDiffableAssetIds:(id)a1 recordIdsForNonDiffableAssetIds:(id)a2;

- (id)copyWithReplacementRecordIdsForNonDiffableAssetIds:(id)a0;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)a0 recordIdsForDiffableAssetIds:(id)a1 recordIdsForNonDiffableAssetIds:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPlan:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementRecordIdsForDiffableAssetIds:(id)a0;
- (id)init;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
