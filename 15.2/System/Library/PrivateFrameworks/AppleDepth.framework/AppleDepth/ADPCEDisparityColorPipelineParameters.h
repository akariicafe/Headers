@interface ADPCEDisparityColorPipelineParameters : ADPipelineParameters

@property (nonatomic) float minDisparity;
@property (nonatomic) float maxDisparity;
@property (nonatomic) float pceBias;

- (id)init;

@end
