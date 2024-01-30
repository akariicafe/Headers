@class ADJasperPointCloudFilterParameters;

@interface ADJasperColorV2PipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (nonatomic) float uncertaintyThreshold;
@property (nonatomic) unsigned int minRequiredJasperPoints;
@property (nonatomic) float maxDepthThresholdForInvalidUncertainty;
@property (nonatomic) float minDepthThresholdForInvalidUncertainty;
@property (nonatomic) BOOL outputHighConfidencePixelsOnly;

- (id)init;
- (void).cxx_destruct;
- (id)initForPrioritization:(long long)a0;

@end
