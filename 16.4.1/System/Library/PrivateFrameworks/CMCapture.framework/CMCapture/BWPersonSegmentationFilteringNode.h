@class FigSemanticStyleFilteringV1;

@interface BWPersonSegmentationFilteringNode : BWNode {
    int _gpuPriority;
    BOOL _frameRateUpsamplingEnabled;
    BOOL _alignsMaskWithPrimaryCaptureRect;
    unsigned int _inputOrientationRelativeToSensor;
    FigSemanticStyleFilteringV1 *_segmentationMaskFilter;
    struct opaqueCMSampleBuffer { } *_cachedFilteredMaskSampleBuffer;
    struct opaqueCMFormatDescription { } *_filteredMaskFormatDescription;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (BOOL)alignsMaskWithPrimaryCaptureRect;
- (id)initWithGPUPriority:(int)a0 frameRateUpsamplingEnabled:(BOOL)a1;
- (unsigned int)inputOrientationRelativeToSensor;
- (void)setAlignsMaskWithPrimaryCaptureRect:(BOOL)a0;
- (void)setInputOrientationRelativeToSensor:(unsigned int)a0;

@end
