@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitDeleteActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;

@end
