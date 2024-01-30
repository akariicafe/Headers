@class NSDictionary;
@protocol MTLCommandQueue;

@interface BWMattingInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) BOOL refinedDepthDeliveryEnabled;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) NSDictionary *sdofRenderingTuningParameters;

- (void)dealloc;

@end
