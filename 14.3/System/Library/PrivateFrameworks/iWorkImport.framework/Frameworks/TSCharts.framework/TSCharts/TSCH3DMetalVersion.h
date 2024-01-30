@interface TSCH3DMetalVersion : TSCH3DVersion

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isMetal;
- (id)shaderTypeDefinitions;
- (id)textureFunctionPrefixForVariable:(id)a0 context:(id)a1;
- (id)discardStatement;
- (BOOL)supportsClipDistances;
- (BOOL)deprecatesLuminanceAlpha;
- (id)preprocessorDefinitions;
- (void)addCompatibilityFunctionsForShaderProgram:(id)a0;
- (id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)additionalGlobalsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)additionalConclusionsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)isShaderGenerationFromContext:(id)a0 equalToContext:(id)a1;
- (id)textureUsagesForContext:(id)a0;

@end
