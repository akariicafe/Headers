@class NSString, HMCameraSnapshot, HMFUnfairLock, _HMCameraSnapshotControl;
@protocol HMCameraSnapshotControlDelegate;

@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMCameraSnapshotControl *snapshotControl;
@property (weak, nonatomic) id<HMCameraSnapshotControlDelegate> delegate;
@property (readonly, nonatomic) HMCameraSnapshot *mostRecentSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)takeSnapshot;
- (void)cameraSnapshotControl:(id)a0 didTakeSnapshot:(id)a1 error:(id)a2;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)a0;
- (void)fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSnapshotControl:(id)a0;

@end
