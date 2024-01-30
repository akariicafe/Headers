@class NSString, CARSessionStatus;

@interface SUInstallationConstraintMonitorCarplay : SUInstallationConstraintMonitorBase <CARSessionObserving> {
    BOOL _queue_CarplayConnected;
    CARSessionStatus *_queue_carSessionStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidDisconnect:(id)a0;
- (void)sessionDidConnect:(id)a0;
- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (void)_queue_carplayDidChange;

@end
