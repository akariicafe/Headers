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

- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithConvEngineSupportWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2;

@end
