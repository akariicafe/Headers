@interface DeepFusionGaussianPyramid : DeepFusionPyramidBaseClass {
    int _filter;
}

- (int)_performGaussianPyramid:(id)a0 inputTex:(id)a1 textureArray:(id)a2;
- (int)_validateInputs:(id)a0 inTex:(id)a1;
- (int)computeUsing:(id)a0 inTex:(id)a1;
- (id)initWithMetalContext:(id)a0 withFilter:(int)a1;

@end
