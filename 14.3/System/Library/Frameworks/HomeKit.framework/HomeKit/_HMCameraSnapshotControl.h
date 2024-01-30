@class HMCameraSnapshot;
@protocol _HMCameraSnapshotControlDelegate;

@interface _HMCameraSnapshotControl : _HMCameraControl

@property (weak, nonatomic) id<_HMCameraSnapshotControlDelegate> delegate;
@property (retain, nonatomic) HMCameraSnapshot *mostRecentSnapshot;

- (void).cxx_destruct;
- (void)takeSnapshot;
- (void)_handleMostSnapshot:(id)a0;
- (void)_callDelegate:(id)a0 error:(id)a1;
- (void)_handleSnapshot:(id)a0 error:(id)a1 cameraSessionID:(id)a2 mostRecent:(BOOL)a3;
- (void)_callMostRecentSnapshotUpdateDelegate;
- (void)_fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleCreateSnapshotWithBulletinContext:(id)a0 error:(id)a1 cameraSessionID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_mergeNewSnapshot:(id)a0 operations:(id)a1;
- (id)initWithCameraProfile:(id)a0 service:(id)a1 profileUniqueIdentifier:(id)a2 mostRecentSnapshot:(id)a3;
- (void)fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerNotificationHandlers;
- (void)_takeSnapshot;

@end
