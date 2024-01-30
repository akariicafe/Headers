@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

+ (id)sharedSavingWorkerQueue;

- (BOOL)isCancellable;
- (void)performUserInteractionTask;
- (id)createActionProgress;
- (void)_completeSavingForAssets:(id)a0 count:(long long)a1;

@end
