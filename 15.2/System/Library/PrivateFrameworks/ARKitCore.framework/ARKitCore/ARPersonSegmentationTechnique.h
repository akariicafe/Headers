@class SIPeopleSegmentationAlgorithm, ARImageRotationTechnique;

@interface ARPersonSegmentationTechnique : ARMLImageProcessingTechnique {
    struct __CVPixelBufferPool { } *_outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    SIPeopleSegmentationAlgorithm *_algorithm;
    struct __CVBuffer { } *_previousSegmentationData;
    int frameCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (BOOL)preProcessNetworkInputImage:(struct __CVBuffer { } *)a0;
- (void)_prepareOnce:(BOOL)a0;
- (BOOL)isLoadedModelVersionCorrect:(id)a0;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;

@end
