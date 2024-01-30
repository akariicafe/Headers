@interface SUInstallationConstraintMonitorRestoreFromICloud : SUInstallationConstraintMonitorBase {
    BOOL _queue_isRestoring;
    int _queue_restoreToken;
}

- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (void)_queue_restoreStateChanged;

@end
