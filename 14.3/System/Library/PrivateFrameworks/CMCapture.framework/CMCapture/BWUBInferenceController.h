@class NSArray, NSString, BWVideoFormat, BWInferenceEngine, NSDictionary;

@interface BWUBInferenceController : BWStillImageProcessorController <BWInferenceFormatProvider> {
    BOOL _inferenceEnginePrepared;
    BWInferenceEngine *_inferenceEngine;
    BWVideoFormat *_inputFormat;
    NSDictionary *_inferenceOutputFormatByAttachedMediaKey;
}

@property (readonly, nonatomic) NSArray *providedAttachedMediaKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (struct opaqueCMSampleBuffer { } *)semanticSkinMatteSbufFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct __CVBuffer { } *)personMaskFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct opaqueCMSampleBuffer { } *)semanticSkyMatteSbufFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct opaqueCMSampleBuffer { } *)personMaskSbufFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct opaqueCMSampleBuffer { } *)lowResPersonMaskSbufFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct __CVBuffer { } *)semanticSkinMatteFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct __CVBuffer { } *)semanticSkyMatteFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct __CVBuffer { } *)lowResPersonSegmentationMaskFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)faceObservationsFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;

- (void)_releaseResources;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)cancelProcessing;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (int)_configureInferenceWithConfiguration:(id)a0;
- (int)prepareWithPixelBufferPoolProvider:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;

@end
