@class ADJasperColorPipelineParameters;

@interface ADJasperColorExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADJasperColorPipelineParameters *pipelineParameters;
@property (nonatomic) BOOL doTemporalConsistency;
@property (nonatomic) BOOL useAlphaMapForTemporalConsistency;
@property (nonatomic) BOOL doComputeNormals;
@property (nonatomic) unsigned long long temporalConsistencyMethod;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
