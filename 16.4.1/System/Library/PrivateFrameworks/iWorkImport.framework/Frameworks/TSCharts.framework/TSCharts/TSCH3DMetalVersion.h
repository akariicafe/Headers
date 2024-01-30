@interface TSCH3DMetalVersion : TSCH3DVersion

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)version;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)additionalGlobalsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)isMetal;
- (void)addCompatibilityFunctionsForShaderProgram:(id)a0;
- (id)additionalConclusionsForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)deprecatesLuminanceAlpha;
- (id)discardStatement;
- (BOOL)isShaderGenerationFromContext:(id)a0 equalToContext:(id)a1;
- (id)preprocessorDefinitions;
- (id)shaderTypeDefinitions;
- (BOOL)supportsClipDistances;
- (id)textureFunctionPrefixForVariable:(id)a0 context:(id)a1;
- (id)textureUsagesForContext:(id)a0;
- (id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType { unsigned long long x0; })a0;

@end
