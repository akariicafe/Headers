@class NSString, PXAssetsDataSourceManager, PUWallpaperDebugViewSpec, NSDictionary, PUParallaxLayerStackDebugViewController, PHSuggestion, PUWallpaperClassDataSource, PUProgressIndicatorView;

@interface PUWallpaperClassDebugViewController : UICollectionViewController <PXOneUpPresentationDelegate, PUWallpaperClassDataSourceDelegate>

@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec;
@property (retain, nonatomic) NSDictionary *keyAssetBySuggestionUUID;
@property (retain, nonatomic) PHSuggestion *currentSuggestion;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (retain, nonatomic) PUParallaxLayerStackDebugViewController *parallaxViewController;
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator;
@property (retain, nonatomic) PUWallpaperClassDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)oneUpPresentationDataSourceManager:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)initWithSpec:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)contextMenuConfigurationForItemAtIndexPath:(id)a0;
- (void)dataSourceChanged:(id)a0;
- (void)displayAsset:(id)a0;
- (void)hideProgressIndicator;
- (void)showProgressIndicator:(id)a0;

@end
