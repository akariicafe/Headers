@class ADMonocularExecutorParameters, ADMonocularPipeline;

@interface ADMonocularExecutor : ADExecutor {
    ADMonocularPipeline *_pipeline;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmPostProcessedDepth;
}

@property (retain, nonatomic) ADMonocularExecutorParameters *executorParameters;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInputPrioritization:(long long)a0;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (id)getIntermediates;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 rotationPreference:(unsigned long long)a3;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 outDepthMap:(struct __CVBuffer **)a1;

@end
