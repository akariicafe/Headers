@class SCNNode, NSString, NSArray, NSDictionary;

@interface AVTComponentInstance : NSObject {
    NSArray *_assets;
    NSString *_materialVariant;
    NSString *_assetImageVariant;
    NSDictionary *_layers;
}

@property (readonly) SCNNode *assetNode;
@property (readonly) NSString *assetImage;
@property (readonly) struct { BOOL x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; } uvRemappingInfo;

- (void).cxx_destruct;
- (id)assetImageWithLayerNamed:(id)a0;
- (id)assetImageForAsset:(id)a0;
- (id)initWithComponent:(id)a0 assetResourceCache:(id)a1;
- (void)updateMaterialsWithComponent:(id)a0;
- (BOOL)has2DAsset;
- (void)setImageVariant:(id)a0;
- (void)setMaterialVariant:(id)a0;
- (BOOL)has3DAsset;

@end
