@class NSObject;
@protocol OS_dispatch_queue, MPCVocalAttenuationPolicyDelegate;

@interface MPCVocalAttenuationPerformancePolicy : NSObject <MPCVocalAttenuationPolicy>

@property (nonatomic) double performanceLimit;
@property (nonatomic) double timeOfFirstGlitch;
@property (nonatomic) double timeThreshold;
@property (nonatomic) int currentNumberOfGlitches;
@property (nonatomic) int glitchesThreshold;
@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataLock;
@property (readonly, nonatomic) long long type;
@property (readonly, weak, nonatomic) id<MPCVocalAttenuationPolicyDelegate> delegate;
@property (readonly, nonatomic) BOOL canBeReset;

- (void).cxx_destruct;
- (void)reset;
- (id)evaluation;
- (id)initWithPerformanceLimit:(double)a0 calloutQueue:(id)a1 delegate:(id)a2;
- (void)processSample:(double)a0;
- (void)updateEvaluationWithReason:(id)a0;

@end
