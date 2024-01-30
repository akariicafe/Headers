@class ADStereoPipeline, ADStereoExecutorParameters;

@interface ADStereoExecutor : ADExecutor {
    BOOL _isPrepared;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _refColorROI;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _auxColorROI;
    struct __CVBuffer { } *_refColor;
    struct __CVBuffer { } *_itmChunkyRefColor;
    struct __CVBuffer { } *_itmCroppedScaledRefColor;
    struct __CVBuffer { } *_itmRotatedRefColor;
    struct __CVBuffer { } *_auxColor;
    struct __CVBuffer { } *_itmChunkyAuxColor;
    struct __CVBuffer { } *_itmCroppedScaledAuxColor;
    struct __CVBuffer { } *_itmRotatedAuxColor;
    struct __CVBuffer { } *_disparity;
}

@property (copy, nonatomic) ADStereoExecutorParameters *executorParameters;
@property (readonly, retain, nonatomic) ADStereoPipeline *pipeline;

- (id)initWithInputAlignment:(unsigned long long)a0 andPrioritization:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)prepareForEngineType:(unsigned long long)a0;
- (long long)prepareWithBestEngine;
- (long long)numberOfExecutionSteps;
- (long long)executeWithRefColor:(struct __CVBuffer { } *)a0 auxColor:(struct __CVBuffer { } *)a1 outDisparityMap:(struct __CVBuffer **)a2;

@end
