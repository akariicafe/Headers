@interface TSDGLShaderQualifierFloat : TSDGLShaderQualifier

@property (readonly, nonatomic) float GLfloatValue;
@property (nonatomic) float proposedGLfloatValue;

- (id)description;
- (void)setGLUniformWithShader:(id)a0;

@end
