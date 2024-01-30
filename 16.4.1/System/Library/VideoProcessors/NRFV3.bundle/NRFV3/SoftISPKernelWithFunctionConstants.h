@class NSDictionary, NSArray;

@interface SoftISPKernelWithFunctionConstants : NSObject {
    NSDictionary *_pipelineStateDictionary;
    NSArray *_parameterNameArray;
    NSArray *_parameterSizeArray;
    unsigned long long _totalKeyDataSize;
}

+ (id)_addNamespace:(id)a0 toName:(id)a1;
+ (id)_removeNamespace:(id)a0 fromName:(id)a1;

- (void).cxx_destruct;
- (int)_addCombos:(id)a0 partialCombo:(id)a1 paramNameStack:(id)a2 paramCombinations:(id)a3;
- (int)_calculateParameterOffsetAndSize:(id)a0 functionConstantNamespace:(id)a1;
- (id)_dataKeyFromParams:(id)a0;
- (int)_loadWithMetalContext:(id)a0 kernelName:(id)a1 functionConstantNamespace:(id)a2 paramCombinations:(id)a3;
- (int)_loadWithMetalContext:(id)a0 kernelName:(id)a1 functionConstantNamespace:(id)a2 paramValues:(id)a3;
- (int)_verifyFunctionConstants:(id)a0;
- (int)_verifyParamValues:(id)a0 forFunction:(id)a1 functionConstantNamespace:(id)a2;
- (id)getPipelineStateWithParams:(id)a0;
- (id)initWithMetalContext:(id)a0 kernelName:(id)a1 paramValues:(id)a2;
- (id)initWithMetalContext:(id)a0 kernelName:(id)a1 usingNamespace:(id)a2 paramCombinations:(id)a3;
- (id)initWithMetalContext:(id)a0 kernelName:(id)a1 usingNamespace:(id)a2 paramValues:(id)a3;

@end
