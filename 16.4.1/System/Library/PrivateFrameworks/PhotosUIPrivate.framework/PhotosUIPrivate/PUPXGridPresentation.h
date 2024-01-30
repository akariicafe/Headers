@class NSString, PUSessionInfo;

@interface PUPXGridPresentation : NSObject <PXGridPresentation>

@property long long userInterfaceIdiom;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserInterfaceIdiom:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)createAlbumListViewControllerWithCollectionList:(id)a0;
- (void)createGridViewControllerWithAssets:(id)a0 photoLibrary:(id)a1 withTitle:(id)a2 hideTabBar:(BOOL)a3 gridPresentationContext:(long long)a4 containerViewController:(id)a5 barsUpdateDelegate:(id)a6 andCompletion:(id /* block */)a7;
- (id)createPhotosAlbumViewControllerForAlbum:(id)a0 withFetchResult:(id)a1;
- (id)createViewControllerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1;
- (void)_customizePhotosViewConfiguationForAssetPicker:(id)a0 assetCollection:(id)a1;
- (BOOL)_isEmpty:(id)a0;
- (id)createAlbumListViewControllerWithConfiguration:(id)a0;
- (id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)a0;
- (id)createDuplicatesGridViewControllerWithCollection:(id)a0;
- (id)createImportHistoryGridViewControllerWithCollection:(id)a0;
- (id)createPanoramaViewController;
- (id)createPlacesViewControllerForAssetCollection:(id)a0;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)a0;
- (id)createViewControllerForAssetCollection:(id)a0;

@end
