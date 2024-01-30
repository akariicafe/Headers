@class NSString, PXCMMWorkflowCoordinator;

@interface PXPhotoKitAssetCollectionMomentShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXCMMWorkflowCoordinatorDelegate> {
    PXCMMWorkflowCoordinator *_workflowCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAlertActionWithTitle:(id)a0 handler:(id /* block */)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (long long)shareOriginForSession:(id)a0 workflowCoordinator:(id)a1;
- (void)workflowCoordinator:(id)a0 workflowViewController:(id)a1 didFinishSession:(id)a2 withActivityState:(unsigned long long)a3;

@end
