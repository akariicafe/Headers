@interface MLCComputeEngineCommon : NSObject

+ (void)updateLayersAndTensorsForComplexActivationFunction:(id)a0 inputTensor:(id)a1;
+ (void)applyPatternMatcherForGraph:(id)a0 stopGradientTensorList:(id)a1 startAtLayerIndex:(unsigned long long)a2 forInference:(BOOL)a3;
+ (BOOL)doesActivationRequireInput:(id)a0 forInference:(BOOL)a1;
+ (BOOL)forwardSourceTensorToChildLayersFrom:(id)a0 stopGradientTensorList:(id)a1;
+ (BOOL)isResultTensorInStopGradientTensorList:(id)a0 resultTensor:(id)a1 forInference:(BOOL)a2;
+ (void)updateTensorsForFusedPaddingAndConvolutionLayer:(id)a0 layerNext:(id)a1;
+ (void)updateTensorsForThreeFusedLayers:(id)a0 layerNext:(id)a1 layerNext2:(id)a2;
+ (void)updateTensorsForTwoFusedLayers:(id)a0 layerNext:(id)a1;

@end
