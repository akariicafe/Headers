@class PHAsset;

@interface PUActivityAssetItem : NSObject <NSCopying>

@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL excludeLiveness;
@property (nonatomic) BOOL excludeLocation;
@property (nonatomic) BOOL excludeCaption;
@property (nonatomic) BOOL excludeAccessibilityDescription;

+ (id)itemsForAssets:(id)a0;

- (id)initWithAsset:(id)a0;
- (id)localIdentifier;
- (id)description;
- (BOOL)isEqualToActivityAssetItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
