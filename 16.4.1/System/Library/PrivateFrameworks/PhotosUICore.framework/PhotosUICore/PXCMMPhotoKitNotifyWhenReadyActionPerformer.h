@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitNotifyWhenReadyActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (BOOL)_needsToNotifyForMomentShare:(id)a0 localAssetCount:(long long)a1;
- (void)performBackgroundTask;

@end
