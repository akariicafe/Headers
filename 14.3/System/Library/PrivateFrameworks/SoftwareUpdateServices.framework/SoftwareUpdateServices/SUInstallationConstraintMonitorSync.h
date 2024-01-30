@class NSString, ATConnection;

@interface SUInstallationConstraintMonitorSync : SUInstallationConstraintMonitorBase <ATConnectionDelegate> {
    BOOL _queue_isSyncing;
    ATConnection *_queue_airTrafficConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionWasInterrupted:(id)a0;
- (void)dealloc;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (void)_queue_initilizaSyncState;
- (void)_queue_setSyncing:(BOOL)a0;

@end
