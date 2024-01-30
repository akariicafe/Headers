@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (void).cxx_destruct;
- (id)metrics;
- (unsigned long long)hash;
- (id)dimensions;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addMetric:(id)a0;
- (id)tags;
- (id)nextTasksForRunStatus:(int)a0;
- (id)initWithExperiment:(id)a0;
- (int)projectIdForExperimentWithPaths:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (void)addDimension:(id)a0;

@end
