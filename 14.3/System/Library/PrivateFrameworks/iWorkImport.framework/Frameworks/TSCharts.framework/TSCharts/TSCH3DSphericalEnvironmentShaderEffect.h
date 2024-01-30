@class NSArray, TSCH3DTexturePool;

@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect {
    NSArray *mMaterials;
    TSCH3DTexturePool *mPool;
}

+ (Class)stateClass;
+ (id)effectWithMaterials:(id)a0 pool:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (void)updateState:(id)a0 effectsStates:(id)a1;
- (id)initWithMaterials:(id)a0 pool:(id)a1;
- (id)textureVariablesArray;

@end
