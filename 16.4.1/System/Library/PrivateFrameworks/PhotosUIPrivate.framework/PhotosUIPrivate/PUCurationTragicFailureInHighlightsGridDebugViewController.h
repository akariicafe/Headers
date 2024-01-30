@class PUCurationTragicFailureInHighlightsDebugViewController, NSString, NSArray, NSDictionary, PHPhotosHighlight, UIBarButtonItem;

@interface PUCurationTragicFailureInHighlightsGridDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray *_allAssets;
    NSArray *_filteredAssets;
    NSDictionary *_utilityTypesByAssetUUID;
    BOOL _showsAll;
    BOOL _showsTragicFailure;
    BOOL _showsNonMemorable;
    BOOL _showsPoorQuality;
    UIBarButtonItem *_showsTragicFailureButtonItem;
    UIBarButtonItem *_showsNonMemorableButtonItem;
    UIBarButtonItem *_showsPoorQualityButtonItem;
}

@property (retain, nonatomic) PHPhotosHighlight *highlight;
@property (retain, nonatomic) PUCurationTragicFailureInHighlightsDebugViewController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpec:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_presentTapToRadar;
- (void)update;
- (void)viewDidLoad;
- (BOOL)shouldShowSectionHeaders;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)toggleShowsAll:(id)a0;
- (void)setButton:(id)a0 toOn:(BOOL)a1;
- (id)_cloneAsset:(id)a0 toDirectory:(id)a1;
- (void)_fileRadarWithIncorrectAssets:(id)a0;
- (BOOL)_writeDiagnosticsToURL:(id)a0 incorrectAssets:(id)a1;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (void)toggleShowsNonMemorable:(id)a0;
- (void)toggleShowsPoorQuality:(id)a0;
- (void)toggleShowsTragicFailure:(id)a0;
- (unsigned long long)utilityTypesWithAsset:(id)a0 sceneClassifications:(id)a1;

@end
