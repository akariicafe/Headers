@class NSString, PUSessionInfo;

@interface PUPXGridPresentation : NSObject <PXGridPresentation>

@property long long userInterfaceIdiom;
@property (readonly, nonatomic, getter=_isRunningInPhotoPicker) BOOL _isRunningInPhotoPicker;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_customizePhotosViewConfiguationForAssetPicker:(id)a0 assetCollection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)createAlbumListViewControllerWithConfiguration:(id)a0;
- (id)_assetCollectionToAssetsMapForAssets:(id)a0;
- (id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)a0;
- (id)initWithUserInterfaceIdiom:(long long)a0;
- (id)createViewControllerForAssetCollection:(id)a0;
- (id)createViewControllerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1;
- (id)createPhotosAlbumViewControllerForAlbum:(id)a0 withFetchResult:(id)a1;
- (id)createAlbumListViewControllerWithCollectionList:(id)a0;
- (id)createPanoramaViewController;
- (id)createPlacesViewControllerForAssetCollection:(id)a0;
- (BOOL)_isEmpty:(id)a0;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)a0;
- (void)createGridViewControllerWithAssets:(id)a0 withTitle:(id)a1 hideTabBar:(BOOL)a2 gridPresentationContext:(long long)a3 containerViewController:(id)a4 barsUpdateDelegate:(id)a5 andCompletion:(id /* block */)a6;
- (id)createPhotosPickerViewControllerWithSelectedAssets:(id)a0 anchorAtAsset:(id)a1 inAssetCollection:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)createImportHistoryGridViewControllerWithCollection:(id)a0;

@end
