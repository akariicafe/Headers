@class NSString, SUNetworkMonitor;

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase <SUNetworkObserver> {
    SUNetworkMonitor *_queue_networkMonitor;
    BOOL _queue_hasNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)networkChangedFromNetworkType:(int)a0 toNetworkType:(int)a1;
- (void)_queue_networkDidChange;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (id)initOnQueue:(id)a0 withDownload:(id)a1 networkMonitor:(id)a2;
- (unsigned long long)unsatisfiedConstraints;

@end
