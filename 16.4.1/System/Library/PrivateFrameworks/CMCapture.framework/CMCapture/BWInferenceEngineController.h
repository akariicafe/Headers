@class NSArray, NSString, BWVideoFormat, BWInferenceEngine, NSDictionary;

@interface BWInferenceEngineController : BWStillImageProcessorController <BWInferenceEngineControllerInputDelegate, BWInferenceFormatProvider> {
    NSString *_contextName;
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

+ (id)faceObservationsFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct __CVBuffer { } *)inferenceMaskFromSbuf:(struct opaqueCMSampleBuffer { } *)a0 attachedMediaKey:(id)a1;
+ (struct opaqueCMSampleBuffer { } *)inferenceMaskSbufFromSbuf:(struct opaqueCMSampleBuffer { } *)a0 attachedMediaKey:(id)a1;
+ (id)lowResPersonInstanceBoundingBoxesFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)lowResPersonInstanceConfidencesFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)lowResPersonInstanceMasksFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)skinToneClassificationsFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)smartCameraClassificationsFromSbuf:(struct opaqueCMSampleBuffer { } *)a0;
+ (BOOL)usesCustomProcessingFlow;

- (void)dealloc;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (int)process;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (int)prepare;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (void)reset;
- (id)_suppressedInferenceTypesForInput:(id)a0;
- (id)initWithConfiguration:(id)a0 contextName:(id)a1;
- (void)inputReceivedNewData:(id)a0;
- (int)prepareWithPixelBufferPoolProvider:(id)a0;
- (id)requestForInput:(id)a0 delegate:(id)a1 errOut:(int *)a2;

@end
