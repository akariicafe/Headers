@class SIPeopleSegmentationAlgorithm, ARImageRotationTechnique;

@interface ARPersonSegmentationTechnique : ARMLImageProcessingTechnique {
    struct __CVPixelBufferPool { } *_outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    SIPeopleSegmentationAlgorithm *_algorithm;
    struct __CVBuffer { } *_previousSegmentationData;
    int frameCount;
}

@property (nonatomic) BOOL shouldOperateOnHighResolutionImages;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)processData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_prepareOnce:(BOOL)a0;
- (BOOL)isLoadedModelVersionCorrect:(id)a0;
- (BOOL)preProcessNetworkInputImage:(struct __CVBuffer { } *)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;

@end
