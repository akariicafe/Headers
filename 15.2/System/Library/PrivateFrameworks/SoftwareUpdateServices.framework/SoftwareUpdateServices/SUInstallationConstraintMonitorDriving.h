@interface SUInstallationConstraintMonitorDriving : SUInstallationConstraintMonitorBase {
    BOOL _queue_isDriving;
}

- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (void)_handleVehicularStateChangeNotification:(id)a0;
- (void)_queue_pollSatisfied;

@end
