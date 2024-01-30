@interface SUInstallationConstraintMonitorRestoreFromITunes : SUInstallationConstraintMonitorBase {
    BOOL _queue_isRestoring;
    int _queue_startNotifyToken;
    int _queue_endNotifyToken;
}

- (void)dealloc;
- (void)_queue_beganRestoring;
- (void)_queue_endedRestoring;
- (void)_queue_setRestoring:(BOOL)a0;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (unsigned long long)unsatisfiedConstraints;

@end
