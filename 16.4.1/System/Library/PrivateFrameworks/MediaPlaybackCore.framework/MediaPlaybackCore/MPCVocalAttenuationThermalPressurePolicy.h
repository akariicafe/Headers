@class ICEnvironmentMonitor, NSString, NSObject;
@protocol OS_dispatch_queue, MPCVocalAttenuationPolicyDelegate;

@interface MPCVocalAttenuationThermalPressurePolicy : NSObject <ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy>

@property (retain, nonatomic) ICEnvironmentMonitor *thermalMonitor;
@property (nonatomic) long long currentThermalLevel;
@property (nonatomic) long long cutoffThermalLevel;
@property (nonatomic) long long reenablementThermalLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataLock;
@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, weak, nonatomic) id<MPCVocalAttenuationPolicyDelegate> delegate;
@property (readonly, nonatomic) BOOL canBeReset;

- (void)environmentMonitorDidChangeThermalLevel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)evaluation;
- (id)initWithCalloutQueue:(id)a0 delegate:(id)a1;
- (id)initWithThermalMonitor:(id)a0 calloutQueue:(id)a1 delegate:(id)a2;
- (void)thermalStateDidChange:(long long)a0;
- (void)updateEvaluationWithReason:(id)a0;

@end
