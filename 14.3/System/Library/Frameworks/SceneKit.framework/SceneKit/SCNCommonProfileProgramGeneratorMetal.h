@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {
    BOOL _useFunctionConstants;
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
    NSString *_originalLightingSourceCode;
    NSArray *_lightingInjectionPointRanges;
}

- (id)init;
- (void)dealloc;
- (int)profile;
- (void)emptyShaderCache;
- (void)collectShaderForProgram:(struct __C3DFXMetalProgram { } *)a0 newVertexFunctionName:(id)a1 newFragmentFunctionName:(id)a2 sourceCodeBlock:(id /* block */)a3 additionalFileBlock:(id /* block */)a4;
- (struct __C3DFXProgram { } *)_newProgramWithHashCode:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(void *)a2;
- (void)_loadSourceCode;
- (struct __C3DFXProgram { } *)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(void *)a2;

@end
