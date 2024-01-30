@class NSString, NSMutableDictionary, NSMutableSet;

@interface TSDGLShader : NSObject {
    NSMutableDictionary *_uniforms;
    NSMutableSet *_uniformsNeedingUpdate;
    NSMutableDictionary *_attributeLocations;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int programObject;
@property (readonly, nonatomic) BOOL isActive;

- (void)teardown;
- (id)description;
- (void)activate;
- (id)init;
- (void)deactivate;
- (void)dealloc;
- (id)initWithDefaultTextureShaderWithMotionBlur:(BOOL)a0 ignoreTextureOpacity:(BOOL)a1;
- (id)initWithVertexShaderFileName:(id)a0 fragmentShaderFileName:(id)a1 bundle:(id)a2 defines:(id)a3;
- (void)setGLint:(int)a0 forUniform:(id)a1;
- (id)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(BOOL)a0 ignoreTextureOpacity:(BOOL)a1;
- (void)setGLFloat:(float)a0 forUniform:(id)a1;
- (void)setPoint4D:(struct { float x0; float x1; float x2; float x3; })a0 forUniform:(id)a1;
- (id)p_contentsOfShader:(id)a0 extension:(id)a1 bundle:(id)a2;
- (id)initWithVertexShader:(id)a0 fragmentShader:(id)a1 defines:(id)a2;
- (BOOL)loadVertexShader:(id)a0 fragmentShader:(id)a1 defines:(id)a2;
- (BOOL)p_compileShader:(unsigned int *)a0 withType:(unsigned int)a1 shaderString:(id)a2 defines:(id)a3;
- (void)p_updateUniformsAndAttributesFromShader;
- (id)shaderQualifierForUniform:(id)a0 type:(long long)a1;
- (int)locationForAttribute:(id)a0;
- (id)p_qualifierForUniform:(id)a0 class:(Class)a1;
- (void)p_setQualifiersIfNecessary;
- (void)setGLint:(int)a0 forShaderQualifier:(id)a1;
- (void)setGLFloat:(float)a0 forShaderQualifier:(id)a1;
- (void)setPoint2D:(struct { float x0; float x1; })a0 forShaderQualifier:(id)a1;
- (void)setPoint2D:(struct { float x0; float x1; })a0 forUniform:(id)a1;
- (void)setPoint3D:(struct { float x0; float x1; float x2; })a0 forShaderQualifier:(id)a1;
- (void)setPoint4D:(struct { float x0; float x1; float x2; float x3; })a0 forShaderQualifier:(id)a1;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 forShaderQualifier:(id)a1;
- (void)setMat4WithTransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 forShaderQualifier:(id)a1;
- (id)initWithDefaultTextureShader;
- (id)initWithDefaultTextureCoordinatesShader;
- (id)initWithDefaultTextureAndOpacityShader;
- (id)initWithDefaultRandomColorShader;
- (id)initWithDefaultRandomColorTextureShader;
- (id)initWithDefaultVelocityShader;
- (id)initWithDefaultVelocityMeshShader;
- (id)initWithDefaultVelocityCollectionShaderWithSampleCount:(unsigned long long)a0 isSingleObject:(BOOL)a1;
- (id)initWithDefaultVelocityVisualizerShader;
- (id)initWithDefaultVerticalBlurShader;
- (id)initWithDefaultHorizontalBlurShader;
- (id)initWithDefaultUniformMotionBlurShader;
- (void)setInteger:(long long)a0 forShaderQualifier:(id)a1;
- (void)setInteger:(long long)a0 forUniform:(id)a1;
- (void)setCGFloat:(double)a0 forUniform:(id)a1;
- (void)setLifeSpan:(struct { float x0; float x1; })a0 forUniform:(id)a1;
- (void)setPoint3D:(struct { float x0; float x1; float x2; })a0 forUniform:(id)a1;
- (void)setColor:(struct { float x0; float x1; float x2; float x3; })a0 forUniform:(id)a1;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 forUniform:(id)a1;
- (void)setMat4WithTransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 forUniform:(id)a1;
- (int)locationForUniform:(id)a0;
- (BOOL)validateUniforms;

@end
