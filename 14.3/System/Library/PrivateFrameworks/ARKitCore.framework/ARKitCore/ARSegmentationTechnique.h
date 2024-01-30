@class ARImageRotationTechnique;

@interface ARSegmentationTechnique : ARMLImageProcessingTechnique {
    struct __CVPixelBufferPool { } *_outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    struct __CVBuffer { } *_previousSegmentationData;
    int frameCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_fullDescription;
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
- (BOOL)isLoadedModelVersionCorrect:(id)a0;
- (BOOL)preProcessNetworkInputImage:(struct __CVBuffer { } *)a0;
- (id)createResultDataFromTensors:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 numberOfOutputTensors:(unsigned long long)a1 inputImageData:(id)a2 rotationNeeded:(long long)a3 regionOfInterest:(struct CGSize { double x0; double x1; })a4;
- (id)createSegmentationResultDataFromTensors:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 inputImageData:(id)a1 rotationNeeded:(long long)a2 regionOfInterest:(struct CGSize { double x0; double x1; })a3;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;

@end
