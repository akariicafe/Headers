@interface GLKEffectPropertyFog : GLKEffectProperty

@property (nonatomic) int modeLoc;
@property (nonatomic) int colorLoc;
@property (nonatomic) int densityLoc;
@property (nonatomic) int startLoc;
@property (nonatomic) int endLoc;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) int mode;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color;
@property (nonatomic) float density;
@property (nonatomic) float start;
@property (nonatomic) float end;

+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;

- (id)init;
- (void)bind;
- (void)dealloc;
- (id)description;
- (void)dirtyAllUniforms;
- (BOOL)includeVshShaderTextForRootNode:(id)a0;
- (BOOL)includeFshShaderTextForRootNode:(id)a0;
- (void)initializeMasks;
- (void)setShaderBindings;

@end
