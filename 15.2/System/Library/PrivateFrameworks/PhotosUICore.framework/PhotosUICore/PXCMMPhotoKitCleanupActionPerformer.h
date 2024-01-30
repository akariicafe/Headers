@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitCleanupActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)performBackgroundTask;
- (void)_activateSuggestion:(id)a0 completionHandler:(id /* block */)a1;

@end
