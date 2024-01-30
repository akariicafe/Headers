@class ADJasperPointCloudFilterParamaters;

@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParamaters *pointCloudFilter;
@property (retain, nonatomic) ADJasperPointCloudFilterParamaters *pointCloudFilterForTransformCorrection;

- (id)init;
- (void).cxx_destruct;

@end
