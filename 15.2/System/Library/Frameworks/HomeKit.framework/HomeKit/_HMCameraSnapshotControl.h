@class HMCameraSnapshot;
@protocol _HMCameraSnapshotControlDelegate;

@interface _HMCameraSnapshotControl : _HMCameraControl

@property (weak) id<_HMCameraSnapshotControlDelegate> delegate;
@property (retain) HMCameraSnapshot *mostRecentSnapshot;

+ (id)logCategory;

- (void)_takeSnapshot;
- (void)takeSnapshot;
- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0 service:(id)a1 profileUniqueIdentifier:(id)a2 mostRecentSnapshot:(id)a3;
- (void)fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)mergeNewSnapshot:(id)a0 operations:(id)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_registerNotificationHandlers;
- (void)_fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleSnapshot:(id)a0 error:(id)a1 cameraSessionID:(id)a2 mostRecent:(BOOL)a3;
- (void)_handleMostRecentSnapshot:(id)a0;
- (void)_notifyDelegateOfDidTakeSnapshot:(id)a0 error:(id)a1;
- (void)_notifyDelegateOfMostRecentSnapshotUpdated;
- (void)_handleCreateSnapshotWithBulletinContext:(id)a0 error:(id)a1 cameraSessionID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleMostRecentSnapshotUpdatedMessage:(id)a0;

@end
