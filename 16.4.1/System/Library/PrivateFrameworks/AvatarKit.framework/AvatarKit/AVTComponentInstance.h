@class SCNNode, NSString, NSArray, NSMapTable, NSMutableDictionary, NSDictionary;

@interface AVTComponentInstance : NSObject {
    NSArray *_assets;
    NSString *_materialVariant;
    NSString *_assetImageVariant;
    float _skinnerVariantIntensity;
    NSMapTable *_variantSkinnerPairs;
    NSMutableDictionary *_visibilityRules;
    NSDictionary *_layers;
}

@property (readonly) SCNNode *assetNode;
@property (readonly) NSString *assetImage;
@property (readonly) struct { BOOL x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; } uvRemappingInfo;

- (void).cxx_destruct;
- (id)assetImageForAsset:(id)a0;
- (id)assetImageWithLayerNamed:(id)a0;
- (BOOL)has2DAsset;
- (BOOL)has3DAsset;
- (id)initWithComponent:(id)a0 assetResourceCache:(id)a1;
- (void)setImageVariant:(id)a0;
- (void)setMaterialVariant:(id)a0;
- (void)setSkinnerVariantIntensity:(float)a0 skeleton:(id)a1;
- (void)setVisibilityRules:(id)a0 dictatedByCategory:(long long)a1;
- (void)updateMaterialsWithComponent:(id)a0;

@end
