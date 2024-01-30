@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier

@property (readonly, nonatomic) int GLintValue;
@property (nonatomic) int proposedGLintValue;

- (id)description;
- (void)setGLUniformWithShader:(id)a0;

@end
