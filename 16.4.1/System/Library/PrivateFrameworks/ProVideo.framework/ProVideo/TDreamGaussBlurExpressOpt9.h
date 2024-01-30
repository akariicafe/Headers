@interface TDreamGaussBlurExpressOpt9 : TDreamProgramWrapper {
    float kernel[3];
    int kernelUniform;
    float offsets[3];
    int offsetsUniform;
}

- (id)init;
- (void)setOffsets:(const double *)a0;
- (void)setKernel:(const double *)a0;
- (void)setUniforms;

@end
