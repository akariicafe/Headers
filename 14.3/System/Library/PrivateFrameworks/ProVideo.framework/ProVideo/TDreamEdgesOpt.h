@interface TDreamEdgesOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize[2];
    int oneOverSizeUniform;
    int radioUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setUniforms;
- (void)setOneOverSize:(const float *)a0;

@end
