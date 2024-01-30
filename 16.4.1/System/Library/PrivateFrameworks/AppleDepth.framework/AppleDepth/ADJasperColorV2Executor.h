@class ADJasperColorV2ExecutorParameters, ADMutableJasperPointCloud, ADJasperColorV2Pipeline;

@interface ADJasperColorV2Executor : ADExecutor {
    BOOL _isPrepared;
    ADJasperColorV2Pipeline *_pipeline;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; int x8; int x9; } *_colorProcessingSession;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    struct __CVBuffer { } *_itmPrevDepth;
    struct __CVBuffer { } *_itmPrevColor;
    struct __CVBuffer { } *_itmPrevUncertainty;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmUnprocessedUncertainty;
    ADMutableJasperPointCloud *_itmPovChangedPointCloud;
    BOOL _temporalConsistencySupported;
    BOOL _isPaddingRequired;
    unsigned long long _paddingLinesTop;
    unsigned long long _paddingLinesBottom;
    double _preScaledPaddingLines;
    double _colorScaleFactor;
}

@property (copy, nonatomic) ADJasperColorV2ExecutorParameters *executorParameters;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedOutputSize;
@property (readonly, nonatomic) struct __CVBuffer { } *prevDepth;
@property (readonly, nonatomic) struct __CVBuffer { } *prevUncertainty;
@property (readonly, nonatomic) struct __CVBuffer { } *prevColor;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 jasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 colorCamera:(id)a3 outputDepthMap:(struct __CVBuffer **)a4 outputConfidenceMap:(struct __CVBuffer **)a5;
- (id)initWithInputPrioritization:(long long)a0 engineType:(unsigned long long)a1;
- (long long)prepareForColorROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithInputPrioritization:(long long)a0;
- (long long)allocateIntermediateBuffers;
- (void)deallocateEspressoBuffers;
- (id)getIntermediates;
- (long long)numberOfExecutionSteps;

@end
