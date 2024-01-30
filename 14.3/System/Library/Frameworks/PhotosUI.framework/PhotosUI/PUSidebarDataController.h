@class NSOperationQueue, UIImage, PUStackView;

@interface PUSidebarDataController : PXSidebarDataController

@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage;
@property (retain, nonatomic) PUStackView *reusableStackView;

+ (id)_actionManagerWithActionType:(id)a0;
+ (id)myAlbumsDataSectionManagerForPhotoLibrary:(id)a0 withWorkQueue:(id)a1;
+ (id)sharedAlbumsDataSectionManagerWithWorkQueue:(id)a0;
+ (id)otherAlbumsDataSectionManagerWithWorkQueue:(id)a0 sectionEnablementProvider:(id)a1;
+ (id)fromMyMacAlbumsDataSectionManagerWithWorkQueue:(id)a0;

- (void).cxx_destruct;
- (void)requestImageForItem:(id)a0 parentItem:(id)a1 completion:(id /* block */)a2;
- (id)sectionManagersForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2;
- (id)_singleItemDataSourceManagerForCollection:(id)a0 workQueue:(id)a1;
- (id)_imageForGlyphName:(id)a0;
- (void)_requestImageForAsset:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)_createReusableStackViewWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (id)backedPlusButtonImage;
- (id)sidebarCustomSymbolImageWithName:(id)a0 symbolColor:(id)a1 scale:(double)a2;

@end
