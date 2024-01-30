@class AR2DSkeletonDetectionPostProcessGPU;

@interface AR2DSkeletonDetectionTechnique : ARMLImageProcessingTechnique {
    AR2DSkeletonDetectionPostProcessGPU *_postProcessorGPU;
    struct __CVPixelBufferPool { } *_heatmapPool;
    struct __CVPixelBufferPool { } *_affinityPool;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (double)requiredTimeInterval;
- (struct { float x0; float x1; float x2; float x3; BOOL x4; })networkInputParams;
- (id)createResultDataFromPixelBuffer:(struct __CVBuffer **)a0 numberOfOutputTensors:(unsigned long long)a1 imageDataForNeuralNetwork:(id)a2 inputImageData:(id)a3 rotationNeeded:(long long)a4 regionOfInterest:(struct CGSize { double x0; double x1; })a5;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;

@end
