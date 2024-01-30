@interface TDreamStrokeAndBlendOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize[2];
    int oneOverSizeUniform;
}

- (id)init;
- (void)setUniforms;
- (void)setOneOverSize:(const float *)a0;

@end
