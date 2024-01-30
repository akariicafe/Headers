@class NSString, NSSet, BWInferenceEngine, BWFigVideoCaptureDevice;

@interface BWInferenceNode : BWNode <BWInferencePixelBufferPoolProvider, BWInferenceFormatProvider> {
    NSSet *_inferenceTypesToSkip;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inferenceTypesToSkipLock;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _awaitAsynchronousOutputs;
    BOOL _applyRecommendedMasterPortType;
    NSString *_recommendedMasterPortType;
}

@property (readonly, nonatomic) BWInferenceEngine *inferenceEngine;
@property (nonatomic) BOOL awaitAsynchronousOutputs;
@property (nonatomic) BOOL applyRecommendedMasterPortType;
@property (nonatomic) BOOL passthroughInputSampleBuffer;
@property (nonatomic) int additionalOutputPoolRetainedBufferCount;
@property (copy, nonatomic) id /* block */ postprocessFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (void)setInferencesToSkip:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;
- (int)addInferenceOfType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2;
- (void)dealloc;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (int)addInferenceOfType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer { } *)a0;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (id)initWithScheduler:(id)a0 priority:(unsigned int)a1;
- (id)initWithConvEngineSupportWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;

@end
