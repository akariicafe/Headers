@class ADMonocularV2Pipeline, ADMonocularV2ExecutorParameters;

@interface ADMonocularV2Executor : ADExecutor {
    BOOL _isPrepared;
    ADMonocularV2Pipeline *_pipeline;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPrevDisparity;
    struct __CVBuffer { } *_itmUnprocessedOutputDisparity;
}

@property (copy, nonatomic) ADMonocularV2ExecutorParameters *executorParameters;
@property (readonly, nonatomic) struct __CVBuffer { } *prevDisparity;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInputPrioritization:(long long)a0;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (id)getIntermediates;
- (long long)prepareForEngineType:(unsigned long long)a0 inputColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 outDisparity:(struct __CVBuffer **)a1;

@end
