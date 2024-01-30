@class UIAlertController, PHMomentShare, NSDate;

@interface PXCMMPhotoKitPublishMomentShareActionPerformer : PXCMMPublishActionPerformer {
    UIAlertController *_progressAlertController;
    int _thumbnailRequestID;
    int _previewRequestID;
    PHMomentShare *_momentShare;
    BOOL _didFinalize;
    NSDate *_initialStartDate;
    NSDate *_previewRequestStartDate;
    NSDate *_creationRequestStartDate;
    NSDate *_publishStartDate;
    NSDate *_finishedDate;
}

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_requestPreviewImagesForAsset:(id)a0 resultHandler:(id /* block */)a1;
- (id)_keyAssetForMomentShareCreationWithAssets:(id)a0;
- (void)_presentInternalSharingAlert;
- (void)_createMomentShare;
- (void)_setupSharingProgressController;
- (void)_createMomentShareWithCompletionHandler:(id /* block */)a0;
- (void)_creatingMomentShareDidCompleteWithMomentShare:(id)a0 error:(id)a1;
- (void)_presentBudgetOverridePromptForMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)_publishMomentShare:(id)a0;
- (void)_publishMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)_budgetOverridePromptForMomentShare:(id)a0 completedWithOutcome:(BOOL)a1 error:(id)a2;
- (void)_publishingMomentShare:(id)a0 didCompleteWithShareURL:(id)a1 error:(id)a2;
- (void)_acceptSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (void)_finalizePublishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_performCleanupIfNeeded;
- (void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_handleSharingProgressCancellation;

@end
