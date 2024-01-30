@interface TSCH3DOpenGL3_2Version : TSCH3DGLVersion

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)version;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)additionalGlobalsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)addCompatibilityFunctionsForShaderProgram:(id)a0;
- (id)additionalConclusionsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)deprecatesLuminanceAlpha;
- (id)preprocessorDefinitions;
- (BOOL)supportsClipDistances;
- (id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;

@end
