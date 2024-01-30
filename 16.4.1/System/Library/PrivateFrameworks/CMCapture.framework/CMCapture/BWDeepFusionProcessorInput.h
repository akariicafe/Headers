@class NSDictionary, NSMutableArray, NSArray;
@protocol BWDeepFusionProcessorInputDelegate;

@interface BWDeepFusionProcessorInput : BWStillImageProcessorControllerInput {
    BOOL _allInferencesDelivered;
    NSDictionary *_inferenceAttachedMediaMetadata;
}

@property (readonly, nonatomic) NSMutableArray *inputBuffers;
@property (retain, nonatomic) id<BWDeepFusionProcessorInputDelegate> delegate;
@property (nonatomic) BOOL canProcessEnhancedResolution;
@property (copy, nonatomic) NSDictionary *evZeroReferenceFrameAttachments;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } evZeroReferenceFramePTS;
@property (retain, nonatomic) NSArray *providedInferenceAttachedMedia;
@property (readonly, nonatomic) BOOL processInferenceInputImage;

- (void)dealloc;
- (id)description;
- (void)addBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 bufferType:(unsigned long long)a2;
- (void)allInferencesDelivered;
- (void)beginProcessingCachedBuffers;
- (id)initWithSettings:(id)a0 portType:(id)a1 processInferenceInputImage:(BOOL)a2;
- (void)releaseInputBuffers;

@end
