@class NSSet, FTCinematicTracker, BWVideoDepthInferenceConfiguration, NSObject;
@protocol MTLEvent, OS_dispatch_semaphore;

@interface BWFusionTrackerNode : BWInferenceNode {
    unsigned long long _framesSinceLastDDR;
    FTCinematicTracker *_cinematicTracker;
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;
    id<MTLEvent> _backpressureEvent;
    unsigned long long _backpressureEventNumber;
    NSSet *_humanPosePreventionSet;
}

@property (readonly, nonatomic) BWVideoDepthInferenceConfiguration *videoDepthConfiguration;

+ (void)initialize;

- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)initWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2;
- (BOOL)_attachISPDetectionsFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 toTrackingInput:(id)a1 withFrameTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer { } *)a0;

@end
