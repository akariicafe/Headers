@class CPLPullFromTransportTask, CPLMinglePulledChangesTask;

@interface CPLPullFromTransportSyncStep : CPLSyncStep {
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
}

- (void).cxx_destruct;
- (id)descriptionForTasks;
- (BOOL)launchNecessaryTasks;
- (void)cancelAllTasks:(BOOL)a0;
- (BOOL)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(BOOL *)a2;
- (void)moveTasksToBackground;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;

@end
