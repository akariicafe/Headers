@interface GLKEffectPropertyMaterial : GLKEffectProperty

@property (nonatomic) int _ambientColorLoc;
@property (nonatomic) int _diffuseColorLoc;
@property (nonatomic) int _specularColorLoc;
@property (nonatomic) int _emissiveColorLoc;
@property (nonatomic) int _shininessLoc;
@property (nonatomic) unsigned long long *effectDirtyUniforms;
@property (nonatomic) struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } _colorMaterialEnabledMask;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } ambientColor;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } diffuseColor;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } specularColor;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } emissiveColor;
@property (nonatomic) float shininess;

+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;

- (void)dealloc;
- (id)init;
- (id)description;
- (void)bind;
- (void)initializeMasks;
- (void)dirtyAllUniforms;
- (BOOL)includeFshShaderTextForRootNode:(id)a0;
- (BOOL)includeVshShaderTextForRootNode:(id)a0;
- (void)setShaderBindings;

@end
