@class PHAsset, PUProgressIndicatorView, PUParallaxLayerStackDebugViewController, PXAssetsDataSourceManager, NSString, PHFetchResult, PUWallpaperDebugViewSpec;

@interface PUPortraitWallpaperCandidateDebugViewController : UICollectionViewController <PXOneUpPresentationDelegate, PUWallpaperClassDataSourceDelegate> {
    PHFetchResult *_assets;
    PHAsset *_currentAsset;
}

@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (retain, nonatomic) PUParallaxLayerStackDebugViewController *parallaxViewController;
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator;
@property (nonatomic) BOOL fallbackCase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)oneUpPresentationDataSourceManager:(id)a0;
- (BOOL)shouldAutorotate;
- (id)initWithSpec:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)displayAsset:(id)a0;

@end
