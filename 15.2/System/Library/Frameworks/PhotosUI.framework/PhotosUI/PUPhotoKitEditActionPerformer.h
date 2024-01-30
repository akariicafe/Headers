@class UIViewController;

@interface PUPhotoKitEditActionPerformer : PUPhotoKitActionPerformer {
    UIViewController *_presentedAlertViewController;
}

+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)_beginEditingCurrentAsset;
- (void)_presentEditorForAsset:(id)a0;

@end
