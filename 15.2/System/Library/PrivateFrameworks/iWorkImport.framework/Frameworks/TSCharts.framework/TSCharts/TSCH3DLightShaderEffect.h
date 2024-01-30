@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect {
    unsigned long long _lightCount;
}

+ (Class)stateClass;
+ (void)createStateInEffectsStates:(id)a0;
+ (id)effectWithLightCount:(unsigned long long)a0;
+ (void)updatePackageState:(const void *)a0 effectsStates:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addVariables:(id)a0;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (void)uploadLightPositionablesWithUploader:(id)a0 effectsStates:(id)a1;
- (void)uploadLightDirectionalWithUploader:(id)a0 effectsStates:(id)a1;
- (id)initWithLightCount:(unsigned long long)a0;

@end
