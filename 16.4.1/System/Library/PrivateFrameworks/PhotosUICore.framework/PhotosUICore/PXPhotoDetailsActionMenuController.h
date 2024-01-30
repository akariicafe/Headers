@class PHFetchResult, NSString, PXCMMSendBackSuggestionSource, PXPhotoKitAssetCollectionActionManager;
@protocol PXPhotosDetailsActionMenuDelegate;

@interface PXPhotoDetailsActionMenuController : PXActionMenuController <PXChangeObserver, PXAssetCollectionActionPerformerDelegate>

@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetActionManager;
@property (weak, nonatomic) id<PXPhotosDetailsActionMenuDelegate> delegate;
@property (retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (retain, nonatomic) PHFetchResult *people;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)assetCollectionActionManager;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)assetCollectionActionPerformer:(id)a0 playMovieForAssetCollection:(id)a1;
- (void).cxx_destruct;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)availableActionTypes;
- (id)initWithActionManagers:(id)a0;
- (id)initWithSelectionManager:(id)a0 displayTitleInfo:(id)a1;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
