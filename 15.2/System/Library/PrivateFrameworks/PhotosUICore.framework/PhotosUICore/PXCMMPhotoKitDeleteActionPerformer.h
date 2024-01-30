@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitDeleteActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
