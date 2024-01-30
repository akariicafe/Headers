@protocol MTLCommandQueue;

@interface BWMattingInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) BOOL refinedDepthDeliveryEnabled;
@property (nonatomic) id<MTLCommandQueue> metalCommandQueue;

@end
