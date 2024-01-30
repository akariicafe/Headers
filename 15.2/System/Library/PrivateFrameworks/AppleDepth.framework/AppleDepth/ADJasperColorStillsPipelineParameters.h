@class ADJasperPointCloudFilterParameters;

@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilterForTransformCorrection;

- (void).cxx_destruct;
- (id)init;

@end
