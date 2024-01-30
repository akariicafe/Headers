@interface SUInstallationConstraintMonitorRestoreFromICloud : SUInstallationConstraintMonitorBase {
    BOOL _queue_isRestoring;
    int _queue_restoreToken;
}

- (void)dealloc;
- (void)_queue_restoreStateChanged;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (unsigned long long)unsatisfiedConstraints;

@end
