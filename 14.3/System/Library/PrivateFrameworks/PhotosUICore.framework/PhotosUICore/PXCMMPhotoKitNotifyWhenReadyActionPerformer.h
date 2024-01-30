@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitNotifyWhenReadyActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (BOOL)_needsToNotifyForMomentShare:(id)a0 localAssetCount:(long long)a1;

@end
