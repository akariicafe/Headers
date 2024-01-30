@interface TDreamEdges : TDreamProgramWrapperTwoInput {
    int passUniform;
    int radioUniform;
    int thresholdUniform;
    int preThresholdUniform;
    int modeUniform;
}

@property (nonatomic) double threshold;
@property (nonatomic) double preThreshold;
@property (nonatomic) double sigma;
@property (nonatomic) int mode;

- (id)init;
- (void)setUniforms;

@end
