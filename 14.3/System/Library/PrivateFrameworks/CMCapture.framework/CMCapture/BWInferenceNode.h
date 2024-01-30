@class NSString, BWFigVideoCaptureDevice, BWInferenceEngine;

@interface BWInferenceNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _awaitAsynchronousOutputs;
    BOOL _applyRecommendedMasterPortType;
    NSString *_recommendedMasterPortType;
}

@property (readonly, nonatomic) BWInferenceEngine *inferenceEngine;
@property (nonatomic) BOOL awaitAsynchronousOutputs;
@property (nonatomic) BOOL applyRecommendedMasterPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)a0;
- (id)nodeSubType;
- (id)outputFormatForAttachedMediaKey:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)inputFormatForAttachedMediaKey:(id)a0;
- (void)dealloc;
- (void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;
- (id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;
- (id)initWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (id)inputVideoFormatForAttachedMediaKey:(id)a0;
- (int)addInferenceOfType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2;
- (id)outputVideoFormatForAttachedMediaKey:(id)a0;
- (int)addInferenceOfType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1;

@end
