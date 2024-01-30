@class FBProcessWatchdogEventContext, FBProcessCPUStatistics, RBSProcessHandle;

@interface FBProcessWatchdog : FBSProcessWatchdog {
    RBSProcessHandle *_handle;
}

@property (readonly, nonatomic) long long event;
@property (readonly, retain, nonatomic) FBProcessWatchdogEventContext *eventContext;
@property (readonly, retain, nonatomic) FBProcessCPUStatistics *cpuStatistics;

- (id)_policyDesc;
- (id)initWithProcess:(id)a0 context:(id)a1 policy:(id)a2;
- (void)activate;
- (void).cxx_destruct;

@end
