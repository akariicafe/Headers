@class NSProcessInfo, NSString, NSObject;
@protocol OS_dispatch_queue, MPCVocalAttenuationPolicyDelegate;

@interface MPCVocalAttenuationLowPowerModePolicy : NSObject <ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy>

@property (retain, nonatomic) NSProcessInfo *powerMonitor;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, weak, nonatomic) id<MPCVocalAttenuationPolicyDelegate> delegate;
@property (readonly, nonatomic) BOOL canBeReset;

- (void).cxx_destruct;
- (void)reset;
- (id)evaluation;
- (id)initWithCalloutQueue:(id)a0 delegate:(id)a1;
- (void)processInfoPowerStateDidChange:(id)a0;
- (id)initWithPowerModeMonitor:(id)a0 calloutQueue:(id)a1 delegate:(id)a2;
- (void)powerModeDidChange:(BOOL)a0;
- (void)updateEvaluationWithReason:(id)a0;

@end
