@interface ADPCEDisparityColorPipelineParameters : ADPipelineParameters

@property (nonatomic) unsigned long long trainingWidth;
@property (nonatomic) float disparityScaleForModelZoom;
@property (nonatomic) float minDisparity;
@property (nonatomic) float maxDisparity;
@property (nonatomic) float pceBias;
@property (nonatomic) float outputDisparityBias;

- (id)init;

@end
