@class NSDictionary;

@interface TRIFactorPackAssetFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *metadataForRequestedUnlinkedAssets;
@property (readonly, nonatomic) NSDictionary *recordIdsForDiffableAssetIds;
@property (readonly, nonatomic) NSDictionary *recordIdsForNonDiffableAssetIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)a0 recordIdsForDiffableAssetIds:(id)a1 recordIdsForNonDiffableAssetIds:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToPlan:(id)a0;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)a0;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)a0 recordIdsForDiffableAssetIds:(id)a1 recordIdsForNonDiffableAssetIds:(id)a2;
- (id)copyWithReplacementRecordIdsForDiffableAssetIds:(id)a0;
- (id)copyWithReplacementRecordIdsForNonDiffableAssetIds:(id)a0;

@end
