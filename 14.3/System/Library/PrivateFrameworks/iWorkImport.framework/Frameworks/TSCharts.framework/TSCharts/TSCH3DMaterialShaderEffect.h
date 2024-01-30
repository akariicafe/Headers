@class TSCH3DMaterialShaderVariables, TSCH3DTexturesMaterial, TSCH3DTexturePool;

@interface TSCH3DMaterialShaderEffect : TSCH3DShaderEffect {
    TSCH3DTexturePool *mPool;
    TSCH3DTexturesMaterial *mMaterial;
    TSCH3DMaterialShaderVariables *mVariables;
}

+ (id)stateSharingID;
+ (id)effectWithPool:(id)a0 material:(id)a1 variables:(id)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)addVariables:(id)a0;
- (id)stateSharingID;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (void)affectStates:(id)a0;
- (void)updateState:(id)a0 effectsStates:(id)a1;
- (id)initWithPool:(id)a0 material:(id)a1 variables:(id)a2;

@end
