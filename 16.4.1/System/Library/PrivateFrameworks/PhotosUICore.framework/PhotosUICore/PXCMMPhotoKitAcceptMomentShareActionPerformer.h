@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitAcceptMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (BOOL)canPerformActionWithSession:(id)a0;
- (void)performBackgroundTask;

@end
