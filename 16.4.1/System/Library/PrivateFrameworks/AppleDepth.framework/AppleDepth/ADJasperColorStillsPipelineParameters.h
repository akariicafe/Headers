@class ADJasperPointCloudFilterParameters;

@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilterForTransformCorrection;

- (id)init;
- (void).cxx_destruct;

@end
