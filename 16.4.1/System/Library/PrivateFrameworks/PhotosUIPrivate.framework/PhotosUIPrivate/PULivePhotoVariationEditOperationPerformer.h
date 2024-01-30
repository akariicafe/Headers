@class PHAsset, PUPhotoKitPhotoEditMediaDestination, NSString;

@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer {
    id /* block */ _completionHandler;
    BOOL _didSave;
    PUPhotoKitPhotoEditMediaDestination *_mediaDestination;
    NSString *_sourceEditOperationType;
}

@property (readonly, nonatomic) PHAsset *asset;

+ (id)_sharedResourceManager;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (void)_completeWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleDidFinishSavingEditsForAsset:(id)a0 error:(id)a1;
- (void)_handleLoadResult:(id)a0 analysisResult:(id)a1 editOperationType:(id)a2;
- (void)_performEditOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resourceLoadedWithResult:(id)a0 editOperationType:(id)a1;

@end
