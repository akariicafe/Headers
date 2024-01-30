@interface DeepFusionLaplacianPyramid : DeepFusionPyramidBaseClass

- (id)initWithMetalContext:(id)a0;
- (int)_performLaplacianPyramid:(id)a0 inputTextures:(id)a1 destinationTextures:(id)a2 upsamplingFilter:(int)a3;
- (int)_validateInputs:(id)a0 gaussianPyramid:(id)a1;
- (int)computeUsing:(id)a0 gaussianPyramid:(id)a1 upsamplingFilter:(int)a2;
- (int)upsampleUsing:(id)a0 inputTex:(id)a1 outputTexUpsampled:(id)a2 upsamplingFilter:(int)a3;

@end
