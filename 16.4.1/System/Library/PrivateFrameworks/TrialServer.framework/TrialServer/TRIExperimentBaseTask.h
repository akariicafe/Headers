@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)dimensions;
- (id)tags;
- (id)initWithExperiment:(id)a0;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)metrics;
- (id)trialSystemTelemetry;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMetric:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (void)logAsRollout:(BOOL)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
