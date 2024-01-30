@class PHAsset;

@interface PUActivityAssetItem : NSObject <NSCopying>

@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL excludeLiveness;
@property (nonatomic) BOOL excludeLocation;
@property (nonatomic) BOOL excludeCaption;
@property (nonatomic) BOOL excludeAccessibilityDescription;

+ (id)itemsForAssets:(id)a0;

- (id)localIdentifier;
- (BOOL)isEqualToActivityAssetItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0;

@end
