@interface SUInstallationConstraintMonitorDriving : SUInstallationConstraintMonitorBase {
    BOOL _queue_isDriving;
}

- (void)_handleVehicularStateChangeNotification:(id)a0;
- (void)_queue_pollSatisfied;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (unsigned long long)unsatisfiedConstraints;

@end
