@class ADPearlColorExecutorParameters, ADPearlColorPipeline;

@interface ADPearlColorExecutor : ADExecutor {
    BOOL _isPrepared;
    ADPearlColorPipeline *_pipeline;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmCroppedScaledDisparity;
    struct __CVBuffer { } *_itmRotatedDisparity;
    struct __CVBuffer { } *_itmPreProcessedDisparity;
    struct __CVBuffer { } *_itmUnprocessedOutputDisparity;
}

@property (copy, nonatomic) ADPearlColorExecutorParameters *executorParameters;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (id)getIntermediates;
- (long long)prepareForEngineType:(unsigned long long)a0 inputColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)executeWithDisparity:(struct __CVBuffer { } *)a0 color:(struct __CVBuffer { } *)a1 outDisparity:(struct __CVBuffer **)a2;

@end
