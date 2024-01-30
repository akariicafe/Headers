@interface GLKEffectPropertyConstantColor : GLKEffectProperty

@property (nonatomic) unsigned char enabled;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color;

+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;

- (void)bind;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)dirtyAllUniforms;
- (void)setShaderBindings;

@end
