@interface TDreamEdgesOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize[2];
    int oneOverSizeUniform;
    int radioUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setOneOverSize:(const float *)a0;
- (void)setUniforms;

@end
