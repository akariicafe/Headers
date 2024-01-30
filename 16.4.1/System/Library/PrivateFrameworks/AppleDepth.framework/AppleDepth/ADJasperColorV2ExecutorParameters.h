@class ADJasperColorV2PipelineParameters;

@interface ADJasperColorV2ExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADJasperColorV2PipelineParameters *pipelineParameters;
@property (nonatomic) BOOL outputHighConfidencePixelsOnly;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
