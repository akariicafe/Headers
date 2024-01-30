@interface BWUBInferenceControllerInput : BWStillImageProcessorInput {
    struct opaqueCMSampleBuffer { } *_propagationImage;
}

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *inferenceImage;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *propagationImage;
@property (nonatomic) BOOL generateSemanticSkinMatte;
@property (nonatomic) BOOL generateSemanticSkyMatte;
@property (nonatomic) BOOL generateLowResPersonSegmentationMask;
@property (nonatomic) BOOL generateLowResPersonInstanceMasks;
@property (nonatomic) BOOL generateSmartCameraClassifications;
@property (nonatomic) BOOL generateFaceObservations;

- (void)dealloc;
- (void)addInferenceImage:(struct opaqueCMSampleBuffer { } *)a0;
- (void)addPropagationImage:(struct opaqueCMSampleBuffer { } *)a0;

@end
