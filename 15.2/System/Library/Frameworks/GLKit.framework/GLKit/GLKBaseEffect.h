@class GLKEffect, GLKEffectPropertyTransform, NSArray, GLKEffectPropertyTexture, GLKEffectPropertyConstantColor, GLKEffectPropertyMaterial, NSString, NSMutableArray, GLKEffectPropertyLight, GLKEffectPropertyFog;

@interface GLKBaseEffect : NSObject <GLKNamedEffect> {
    unsigned char _fogEnabled;
}

@property (readonly, nonatomic) NSMutableArray *propertyArray;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic) unsigned char propertyArrayStale;
@property (nonatomic) GLKEffect *effect;
@property (nonatomic) unsigned int programName;
@property (readonly, nonatomic) GLKEffectPropertyConstantColor *constantColorProp;
@property (nonatomic) unsigned char colorMaterialEnabled;
@property (nonatomic) unsigned char lightModelTwoSided;
@property (nonatomic) unsigned char useConstantColor;
@property (readonly, nonatomic) GLKEffectPropertyTransform *transform;
@property (readonly, nonatomic) GLKEffectPropertyLight *light0;
@property (readonly, nonatomic) GLKEffectPropertyLight *light1;
@property (readonly, nonatomic) GLKEffectPropertyLight *light2;
@property (nonatomic) int lightingType;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } lightModelAmbientColor;
@property (readonly, nonatomic) GLKEffectPropertyMaterial *material;
@property (readonly, nonatomic) GLKEffectPropertyTexture *texture2d0;
@property (readonly, nonatomic) GLKEffectPropertyTexture *texture2d1;
@property (copy, nonatomic) NSArray *textureOrder;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } constantColor;
@property (readonly, nonatomic) GLKEffectPropertyFog *fog;
@property (copy, nonatomic) NSString *label;

- (id)description;
- (id)init;
- (void)prepareToDraw;
- (void)dealloc;
- (void)updateBaseEffect;
- (BOOL)perVertexLightingEnabled;
- (BOOL)perPixelLightingEnabled;

@end
