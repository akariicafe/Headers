@interface TSCH3DOpenGL3_2Version : TSCH3DGLVersion

+ (id)version;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsClipDistances;
- (BOOL)deprecatesLuminanceAlpha;
- (id)preprocessorDefinitions;
- (void)addCompatibilityFunctionsForShaderProgram:(id)a0;
- (id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)additionalGlobalsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)additionalConclusionsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;

@end
