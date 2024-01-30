@class BWInferenceScheduler, NSString, BWInferenceVideoFormat, BWVideoFormat, BWInferenceEngine, BWFigVideoCaptureDevice, BWPixelBufferPool;
@protocol MTLEvent;

@interface BWVideoDepthNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {
    BWInferenceEngine *_inferenceEngine;
    BWInferenceScheduler *_inferenceScheduler;
    BWInferenceVideoFormat *_primaryMediaInputFormat;
    BWInferenceVideoFormat *_disparityInputFormat;
    struct opaqueCMFormatDescription { } *_colorImageFormatDescription;
    struct opaqueCMFormatDescription { } *_depthFormatDescription;
    BWFigVideoCaptureDevice *_captureDevice;
    struct opaqueCMSampleBuffer { } *_previousDisparitySampleBuffer;
    struct opaqueCMSampleBuffer { } *_previousFilteredDisparitySampleBuffer;
    struct __CVBuffer { } *_initialDisparityPixelBuffer;
    struct __CVBuffer { } *_initialFilteredPixelBuffer;
    struct __CVBuffer { } *_previousFilteredDisparityPixelBuffer;
    struct __CVBuffer { } *_blankDisparityPixelBuffer;
    struct { int width; int height; } _depthOutputDimensions;
    BOOL _videoDepthEnabled;
    BOOL _structuredLightIsOccluded;
    BWVideoFormat *_internalDisparityVideoFormat;
    BWVideoFormat *_cvsColorInputVideoFormat;
    BWPixelBufferPool *_internalDisparityPool;
    id<MTLEvent> _backpressureEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;
- (void)_copyPreviousFilteredDisparityIfPossible:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithInferenceScheduler:(id)a0 captureDevice:(id)a1 cinematographyModelVersionString:(id)a2 videoDepthConfiguration:(id)a3;

@end
