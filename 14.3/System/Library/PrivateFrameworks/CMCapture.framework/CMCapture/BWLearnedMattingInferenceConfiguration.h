@protocol MTLCommandQueue;

@interface BWLearnedMattingInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (nonatomic) float mainImageDownscalingFactor;

@end
