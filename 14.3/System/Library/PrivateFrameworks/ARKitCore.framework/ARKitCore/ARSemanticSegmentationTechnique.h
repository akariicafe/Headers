@class NSString, ARImageRotationTechnique;

@interface ARSemanticSegmentationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    struct __CVPixelBufferPool { } *_outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledSegmentationOutputPixelBufferPool;
    struct __CVPixelBufferPool { } *_outputConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } *_outputUnceraintyPixelBufferPool;
    struct __CVPixelBufferPool { } *_uncertaintyMaskedSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledUncertaintyPixelBufferPool;
    struct __CVPixelBufferPool { } *_normalsPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledNormalsPixelBufferPool;
    ARImageRotationTechnique *_normalsRotationTechnique;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    ARImageRotationTechnique *_confidenceUncertaintyRotationTechnique;
    double _lastResultPushTimestamp;
    BOOL _isLegacyModel;
    float *_uncertaintyThresholds;
    float *_probabilityThresholds;
    int _numClasses;
}

@property (nonatomic) BOOL supportsUncertainty;
@property (nonatomic) BOOL shouldUseSynchronizedUltraWide;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createUncertaintyMaskedSegmentationBuffer:(struct __CVBuffer { } *)a0 fromSegmentationBuffer:(struct __CVBuffer { } *)a1 uncertaintyBuffer:(struct __CVBuffer { } *)a2 maskValue:(unsigned char)a3;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (void)changeEspressoConfig:(id)a0;
- (id)createResultDataFromTensors:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 numberOfOutputTensors:(unsigned long long)a1 imageDataForNeuralNetwork:(id)a2 inputImageData:(id)a3 rotationNeeded:(long long)a4 regionOfInterest:(struct CGSize { double x0; double x1; })a5;
- (id)initLegacy;
- (id)createSegmentationResultDataFromTensors:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 inputImageData:(id)a1 rotationNeeded:(long long)a2 regionOfInterest:(struct CGSize { double x0; double x1; })a3;
- (int)bindInputBuffer:(unsigned long long)a0 withImage:(id)a1 andOriginalImageData:(id)a2 rotationOfResultTensor:(long long)a3;
- (void)_captureMLRunNetworkInputImageData:(double)a0 cameraType:(long long)a1 imageWidth:(unsigned long long)a2 imageHeight:(unsigned long long)a3;
- (void)createConfidenceBuffer:(struct __CVBuffer { } *)a0 fromTensor:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a1 inputImageData:(id)a2 rotationNeeded:(long long)a3 regionOfInterest:(struct CGSize { double x0; double x1; })a4 segmentationBuffer:(struct __CVBuffer { } *)a5;
- (void)createConfidenceBuffer:(struct __CVBuffer { } *)a0 uncertaintyBuffer:(struct __CVBuffer { } *)a1 fromLogitsTensor:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a2 normalizerTensor:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a3 inputImageData:(id)a4 rotationNeeded:(long long)a5 regionOfInterest:(struct CGSize { double x0; double x1; })a6 segmentationBuffer:(struct __CVBuffer { } *)a7;
- (BOOL)supportsNormals;
- (void)createSegmentationNormalsBuffer:(struct __CVBuffer { } *)a0 fromTensor:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a1 inputImageData:(id)a2 rotationNeeded:(long long)a3 regionOfInterest:(struct CGSize { double x0; double x1; })a4;
- (id)_rotateImageData:(id)a0 withRotationTechnique:(id)a1 rotationNeeded:(long long)a2;

@end
