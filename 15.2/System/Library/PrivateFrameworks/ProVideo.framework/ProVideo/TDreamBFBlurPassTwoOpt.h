@interface TDreamBFBlurPassTwoOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize[2];
    int oneOverSizeUniform;
}

@property (nonatomic) double sigma;
@property (nonatomic) double sigmaColor;

- (id)init;
- (void)setUniforms;
- (void)setOneOverSize:(const float *)a0;

@end
