@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitAcceptMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (BOOL)canPerformActionWithSession:(id)a0;

@end
