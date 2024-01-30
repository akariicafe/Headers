@class ADJasperColorStillsPipelineParameters;

@interface ADJasperColorStillsExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADJasperColorStillsPipelineParameters *pipelineParameters;
@property (nonatomic) BOOL performJasperToColorTransformCorrection;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
