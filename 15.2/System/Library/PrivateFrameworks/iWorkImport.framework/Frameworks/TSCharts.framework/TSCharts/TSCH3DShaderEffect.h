@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>

+ (id)effect;
+ (Class)stateClass;
+ (id)stateSharingID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (Class)stateClass;
- (void)addVariables:(id)a0;
- (id)stateSharingID;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (BOOL)alwaysUploadData;
- (void)updateState:(id)a0 effectsStates:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1 updateCurrentStates:(id)a2;
- (void)injectGLSLInto:(id)a0 context:(id)a1;
- (void)injectMetalShaderInto:(id)a0 context:(id)a1;

@end
