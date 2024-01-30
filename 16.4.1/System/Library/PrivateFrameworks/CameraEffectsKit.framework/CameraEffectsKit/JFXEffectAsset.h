@class NSString, NSURL, JFXEffectAssetAttributes;

@interface JFXEffectAsset : NSObject

@property (readonly, nonatomic) NSString *assetID;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) JFXEffectAssetAttributes *attributes;
@property (readonly, nonatomic) BOOL contentUpdateAvailable;

+ (id)firstAssetInAssets:(id)a0 matchingFilterAttributes:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetID:(id)a0 URL:(id)a1 copyOfAttributes:(id)a2;
- (id)initWithAssetID:(id)a0 URL:(id)a1 copyOfAttributes:(id)a2 contentUpdateAvailable:(BOOL)a3;

@end
