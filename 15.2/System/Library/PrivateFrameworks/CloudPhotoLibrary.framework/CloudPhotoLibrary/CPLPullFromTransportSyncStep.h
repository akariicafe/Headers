@class CPLPullFromTransportTask, CPLMinglePulledChangesTask;

@interface CPLPullFromTransportSyncStep : CPLSyncStep {
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
}

- (void)moveTasksToBackground;
- (id)descriptionForTasks;
- (void).cxx_destruct;
- (BOOL)launchNecessaryTasks;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (BOOL)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(BOOL *)a2;
- (void)cancelAllTasks:(BOOL)a0;

@end
