@class PUPhotoKitPhotoEditMediaDestination, NSString, PHAsset, PUPhotoEditResourceLoader, PUPhotoEditResourceLoadResult;

@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PUPhotoEditResourceLoaderDelegate> {
    id /* block */ _completionHandler;
    BOOL _didSave;
    PUPhotoEditResourceLoader *_resourceLoader;
    PUPhotoEditResourceLoadResult *_loadResult;
    PUPhotoKitPhotoEditMediaDestination *_mediaDestination;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)photoEditResourceLoadRequest:(id)a0 mediaLoadDidFailWithError:(id)a1;
- (void)photoEditResourceLoadRequest:(id)a0 didCompleteWithResult:(id)a1;
- (void)performEditOperationWithCompletionHandler:(id /* block */)a0;
- (void)_completeWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_calculateAnalysisResult;
- (void)_handleAnalysisCalculatorResponse:(id)a0;
- (void)_handleAnalysisResult:(id)a0;
- (void)_handleDidFinishSavingEditsForAsset:(id)a0 error:(id)a1;

@end
