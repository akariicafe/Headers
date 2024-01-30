@class NSString, TRIFullMAAssetId, TRIMAAssetMetadata;

@interface TRIRequiredMAAsset : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isOnDemand;
@property (readonly, nonatomic) TRIMAAssetMetadata *metadata;
@property (readonly, nonatomic) TRIFullMAAssetId *fullAssetId;

+ (id)assetWithFactorName:(id)a0 isInstalled:(BOOL)a1 isOnDemand:(BOOL)a2 metadata:(id)a3 fullAssetId:(id)a4;

- (BOOL)isEqualToAsset:(id)a0;
- (id)copyWithReplacementIsInstalled:(BOOL)a0;
- (id)copyWithReplacementIsOnDemand:(BOOL)a0;
- (id)initWithFactorName:(id)a0 isInstalled:(BOOL)a1 isOnDemand:(BOOL)a2 metadata:(id)a3 fullAssetId:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementMetadata:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementFactorName:(id)a0;
- (id)init;
- (id)description;
- (id)copyWithReplacementFullAssetId:(id)a0;
- (void).cxx_destruct;

@end
