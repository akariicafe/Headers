@class NSString, NSURL, JFXEffectAssetAttributes;

@interface JFXEffectAsset : NSObject

@property (readonly, nonatomic) NSString *assetID;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) JFXEffectAssetAttributes *attributes;

+ (id)firstAssetInAssets:(id)a0 matchingFilterAttributes:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetID:(id)a0 URL:(id)a1 copyOfAttributes:(id)a2;

@end
