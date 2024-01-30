@class NSString, PUActivitySharingController;

@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer <PXCMMActionPerformerDelegate, PXActivitySharingControllerDelegate> {
    PUActivitySharingController *_activitySharingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)activitySharingControllerDidCancel:(id)a0;
- (void)activitySharingController:(id)a0 didCompleteWithActivityType:(id)a1 success:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)performUserInteractionTask;
- (void)_presentShareSheet;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)a0 inDataSource:(id)a1;
- (void)_didCompleteWithActivityType:(id)a0 success:(BOOL)a1 asset:(id)a2 person:(id)a3 selectionSnapshot:(id)a4;
- (void)_performSetKeyFaceWithAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performNotThisPersonWithCompletionHandler:(id /* block */)a0;

@end
