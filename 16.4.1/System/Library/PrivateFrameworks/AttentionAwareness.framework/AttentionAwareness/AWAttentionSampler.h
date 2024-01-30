@class NSObject, AWSampleLogger;
@protocol OS_dispatch_queue;

@interface AWAttentionSampler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
}

@property (retain, nonatomic) AWSampleLogger *sampleLogger;
@property (copy) id /* block */ stateChangedCallback;
@property (nonatomic) int currentState;
@property (nonatomic) unsigned long long samplingSuppressedMask;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) BOOL lastFaceMetadataValid;
@property (nonatomic) double lastPitch;
@property (nonatomic) double lastYaw;
@property (nonatomic) double lastRoll;
@property (nonatomic) unsigned long long lastOrientation;
@property (nonatomic) double lastFrameNumber;
@property (readonly, nonatomic) BOOL unitTestSampling;

- (void)setSmartCoverClosed:(BOOL)a0;
- (void)startDeadlineComputation;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1 withOptions:(union { })a2;
- (id)initWithMask:(unsigned long long)a0;
- (id)init;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0;
- (id)description;
- (void)setUnitTestMode;
- (void)finishDeadlineComputationWithOptions:(union { })a0;
- (void).cxx_destruct;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;

@end
