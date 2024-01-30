@class NSOperationQueue, UIImage, PUStackView;

@interface PUSidebarDataController : PXSidebarDataController

@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage;
@property (retain, nonatomic) PUStackView *reusableStackView;

+ (id)_actionManagerWithActionType:(id)a0;
+ (void)_prepareConfiguration:(id)a0 assetsFilterPredicate:(id)a1;
+ (id)_singleItemDataSourceManagerForCollection:(id)a0 workQueue:(id)a1 additionalAssetsFilterPredicate:(id)a2;
+ (id)fromMyMacAlbumsDataSectionManagerWithWorkQueue:(id)a0 assetsFilterPredicate:(id)a1;
+ (id)myAlbumsDataSectionManagerForPhotoLibrary:(id)a0 withWorkQueue:(id)a1 assetsFilterPredicate:(id)a2 hideAdd:(BOOL)a3;
+ (id)otherAlbumsDataSectionManagerWithWorkQueue:(id)a0 sectionEnablementProvider:(id)a1 assetsFilterPredicate:(id)a2;
+ (id)sharedAlbumsDataSectionManagerWithWorkQueue:(id)a0 assetsFilterPredicate:(id)a1 hideAdd:(BOOL)a2;

- (void).cxx_destruct;
- (void)appearanceDidChange;
- (long long)requestImageForItem:(id)a0 parentItem:(id)a1 completion:(id /* block */)a2;
- (id)sectionManagersForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2 additionalAssetsFilterPredicate:(id)a3;
- (id)_createReusableStackViewWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (long long)_requestImageForAsset:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)backedPlusButtonImage;
- (id)sidebarCustomSymbolImageWithName:(id)a0 symbolColor:(id)a1 scale:(double)a2;

@end
