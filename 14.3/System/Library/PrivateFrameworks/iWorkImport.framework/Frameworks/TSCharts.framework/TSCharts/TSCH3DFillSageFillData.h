@class TSCH3DFill, NSMutableArray;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {
    TSCH3DFill *mFill;
    NSMutableArray *mTextures;
    NSMutableArray *mTextureBlendModes;
}

+ (id)dataWithFill:(id)a0;

- (void)dealloc;
- (float)opacity;
- (id)environment;
- (struct Color { float x0; float x1; float x2; float x3; })diffuse;
- (unsigned long long)layerCount;
- (struct Color { float x0; float x1; float x2; float x3; })specular;
- (id)initWithFill:(id)a0;
- (id)materialAtIndex:(unsigned long long)a0;
- (float)shininess;
- (id)lightingModel;
- (id)phongMaterials;
- (struct Color { float x0; float x1; float x2; float x3; })emissive;
- (id)textureForIndex:(unsigned long long)a0;
- (BOOL)layerIsEnvironmentMapForIndex:(unsigned long long)a0;
- (long long)layerBlendModeForIndex:(unsigned long long)a0;
- (BOOL)isLayerEnabledForIndex:(unsigned long long)a0;
- (float)layerScaleForIndex:(unsigned long long)a0;
- (float)layerRotationForIndex:(unsigned long long)a0;
- (int)layerTilingModeForIndex:(unsigned long long)a0;
- (id)layerLightenPercentageForIndex:(unsigned long long)a0;
- (id)fillSetIdentifier;
- (unsigned long long)diffuseCount;
- (id)diffuseMaterial;
- (void)p_addMaterial:(id)a0 blendMode:(long long)a1;
- (unsigned long long)modulateCount;
- (id)modulateMaterial;

@end
