@class ADPCEDisparityColorExecutorParameters, ADPCEDisparityColorPipeline;
@protocol MTLCommandQueue, MTLDevice;

@interface ADPCEDisparityColorExecutor : ADExecutor {
    BOOL _isPrepared;
    ADPCEDisparityColorPipeline *_pipeline;
    id<MTLDevice> _metalDevice;
    id<MTLCommandQueue> _cmdQueue;
    struct __CVBuffer { } *_preprocessorInputMetalHelper;
    struct __CVBuffer { } *_preprocessorOutputMetalHelper;
    struct __CVBuffer { } *_postprocessorInputMetalHelper;
    struct __CVBuffer { } *_postprocessorOutputMetalHelper;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmCroppedScaledDisparity;
    struct __CVBuffer { } *_itmRotatedDisparity;
    struct __CVBuffer { } *_itmProcessedUnfilteredDisparity;
    struct __CVBuffer { } *_itmPreProcessedDisparity;
    struct __CVBuffer { } *_itmPrevDisparity;
    BOOL _prevDisparityIsZeros;
    struct __CVBuffer { } *_itmPrevFeatures;
    struct __CVBuffer { } *_itmUnprocessedOutputDisparity;
    struct __CVBuffer { } *_itmPostProcessedDisparity;
    struct __CVBuffer { } *_itmFeaturesOutput;
}

@property (copy, nonatomic) ADPCEDisparityColorExecutorParameters *executorParameters;
@property (readonly, nonatomic) struct __CVBuffer { } *prevDisparity;
@property (readonly, nonatomic) struct __CVBuffer { } *prevFeatures;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (long long)executeWithDisparity:(struct __CVBuffer { } *)a0 color:(struct __CVBuffer { } *)a1 outDisparity:(struct __CVBuffer **)a2;
- (long long)executeWithDisparity:(struct __CVBuffer { } *)a0 normalizationMultiplier:(float)a1 normalizationOffset:(float)a2 color:(struct __CVBuffer { } *)a3 outDisparity:(struct __CVBuffer **)a4;
- (id)getIntermediates;
- (id)initForInputSource:(unsigned long long)a0;
- (id)initForInputSource:(unsigned long long)a0 parameters:(id)a1;
- (long long)numberOfExecutionSteps;
- (long long)postProcessDisparity:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;
- (long long)preProcessDisparity:(struct __CVBuffer { } *)a0 normalizationMultiplier:(float)a1 normalizationOffset:(float)a2 output:(struct __CVBuffer { } *)a3;
- (long long)prepareForEngineType:(unsigned long long)a0 inputColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
