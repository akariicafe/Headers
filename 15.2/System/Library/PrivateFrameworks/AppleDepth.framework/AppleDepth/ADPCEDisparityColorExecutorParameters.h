@class ADPCEDisparityColorPipelineParameters;

@interface ADPCEDisparityColorExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADPCEDisparityColorPipelineParameters *pipelineParameters;
@property (nonatomic) BOOL temporalConsistencyActive;
@property (nonatomic) BOOL disparityPreprocessingActive;
@property (nonatomic) long long disparityRotation;
@property (nonatomic) unsigned short disparityInvalidValue;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0 inputSource:(unsigned long long)a1;

@end
