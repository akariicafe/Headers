@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (void)mergeTelemetry:(id)a0;
- (id)nextTasksForRunStatus:(int)a0;
- (id)trialSystemTelemetry;
- (void)logAsRollout:(BOOL)a0;
- (id)description;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addDimension:(id)a0;
- (void)addMetric:(id)a0;
- (id)tags;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)a0;
- (id)dimensions;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;

@end
