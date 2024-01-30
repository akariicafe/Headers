@protocol MTLCommandQueue;

@interface BWLearnedMattingInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (nonatomic) float mainImageDownscalingFactor;

- (void)dealloc;

@end
