@interface TSCH3DVersion : NSObject

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isShaderGenerationFromContext:(id)a0 equalToContext:(id)a1;
- (id)textureFunctionNameForVariable:(id)a0 projective:(BOOL)a1 context:(id)a2;

@end
