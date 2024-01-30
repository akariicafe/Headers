@interface MLCPatternMatcher : NSObject

+ (BOOL)canTransformToGELUFromLayer:(id)a0 stopGradientTensorList:(id)a1 fusedLayers:(id)a2 inputTensor:(id *)a3;
+ (BOOL)canTransformToGELUType1FromLayer:(id)a0 fusedLayers:(id)a1 inputTensor:(id)a2 withAccuracy:(float)a3;
+ (BOOL)canTransformToGELUType2FromLayer:(id)a0 fusedLayers:(id)a1 inputTensor:(id)a2 withAccuracy:(float)a3;
+ (BOOL)canTransformToHardSwishFromLayer:(id)a0 stopGradientTensorList:(id)a1 fusedLayers:(id)a2 inputTensor:(id *)a3;
+ (BOOL)canTransformToReLUNFromLayer:(id)a0 stopGradientTensorList:(id)a1 fusedLayers:(id)a2 alpha:(float *)a3 beta:(float *)a4;
+ (BOOL)checkIntermediateTensorsOfFusedLayers:(id)a0 stopGradientTensorList:(id)a1 forPattern:(id)a2;
+ (float)getAccuracyForLayer:(id)a0;
+ (BOOL)isActivationLayer:(id)a0 withActivationType:(int)a1;
+ (BOOL)isArithmeticLayer:(id)a0 withOperation:(int)a1;
+ (BOOL)isConstTensor:(id)a0 withValue:(float)a1 withAccuracy:(float)a2;

@end
