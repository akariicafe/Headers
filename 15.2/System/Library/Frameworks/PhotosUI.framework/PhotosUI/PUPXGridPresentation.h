@class NSString, PUSessionInfo;

@interface PUPXGridPresentation : NSObject <PXGridPresentation>

@property long long userInterfaceIdiom;
@property (readonly, nonatomic, getter=_isRunningInPhotoPicker) BOOL _isRunningInPhotoPicker;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPlacesViewControllerForAssetCollection:(id)a0;
- (id)initWithUserInterfaceIdiom:(long long)a0;
- (id)createPhotosAlbumViewControllerForAlbum:(id)a0 withFetchResult:(id)a1;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)a0;
- (id)createViewControllerForAssetCollection:(id)a0;
- (id)createViewControllerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1;
- (void)createGridViewControllerWithAssets:(id)a0 photoLibrary:(id)a1 withTitle:(id)a2 hideTabBar:(BOOL)a3 gridPresentationContext:(long long)a4 containerViewController:(id)a5 barsUpdateDelegate:(id)a6 andCompletion:(id /* block */)a7;
- (id)createAlbumListViewControllerWithConfiguration:(id)a0;
- (id)createImportHistoryGridViewControllerWithCollection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)createPanoramaViewController;
- (BOOL)_isEmpty:(id)a0;
- (id)createPhotosPickerViewControllerWithSelectedAssets:(id)a0 anchorAtAsset:(id)a1 inAssetCollection:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)_assetCollectionToAssetsMapForAssets:(id)a0;
- (void)_customizePhotosViewConfiguationForAssetPicker:(id)a0 assetCollection:(id)a1;
- (id)createAlbumListViewControllerWithCollectionList:(id)a0;
- (id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)a0;

@end
