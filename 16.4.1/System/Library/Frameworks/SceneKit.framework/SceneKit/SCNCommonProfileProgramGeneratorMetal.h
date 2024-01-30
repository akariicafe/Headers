@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {
    BOOL _allowHotReload;
    BOOL _useFunctionConstants;
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
    struct _NSRange { unsigned long long location; unsigned long long length; } _commonProfileIORange;
    NSString *_originalLightingSourceCode;
    NSArray *_lightingInjectionPointRanges;
}

- (int)profile;
- (void)dealloc;
- (void)_loadSourceCode;
- (struct __C3DFXProgram { } *)_newProgramWithHashCode:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(void *)a2;
- (struct __C3DFXProgram { } *)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(void *)a2;
- (void)collectShaderForProgram:(struct __C3DFXMetalProgram { } *)a0 newVertexFunctionName:(id)a1 newFragmentFunctionName:(id)a2 sourceCodeBlock:(id /* block */)a3 additionalFileBlock:(id /* block */)a4;
- (void)emptyShaderCache;
- (id)initAllowingHotReload:(BOOL)a0;
- (id)splitInputOutputStructsIfNeededForSourceCode:(id)a0 generatedFromReplacementStrings:(id)a1 perPixelLighting:(BOOL)a2 clipDistanceCount:(unsigned long long)a3;

@end
