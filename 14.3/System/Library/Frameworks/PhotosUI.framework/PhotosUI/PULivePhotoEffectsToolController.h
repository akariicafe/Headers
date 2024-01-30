@class PULivePhotoToolControllerSpec, NSArray, UICollectionView, NSDictionary, UICollectionViewFlowLayout, NSString, PXAssetVariationRenderProvider;

@interface PULivePhotoEffectsToolController : PUPhotoEditToolController <UICollectionViewDelegate, UICollectionViewDataSource> {
    PXAssetVariationRenderProvider *_renderProvider;
    NSArray *_collectionViewConstraints;
    id _editModelObserver;
}

@property (readonly, nonatomic) PULivePhotoToolControllerSpec *spec;
@property (copy, nonatomic, setter=_setOptions:) NSArray *_options;
@property (retain, nonatomic, setter=_setCollectionView:) UICollectionView *_collectionView;
@property (retain, nonatomic, setter=_setCollectionViewLayout:) UICollectionViewFlowLayout *_collectionViewLayout;
@property (retain, nonatomic, setter=_setAnalysisResult:) NSDictionary *_analysisResult;
@property (copy, nonatomic) NSString *analysisResultCacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setLayoutOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredPreviewViewInsets;
- (id)localizedName;
- (void)updateViewConstraints;
- (void)setupWithAsset:(id)a0 compositionController:(id)a1 editSource:(id)a2 overcaptureEditSource:(id)a3 valuesCalculator:(id)a4;
- (BOOL)installTogglePreviewGestureRecognizer:(id)a0;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)a0;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)specDidChange;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectInCoordinateSpace:(id)a0;
- (void)_updateCollectionView;
- (void)_updateCollectionViewInsets;
- (void)_updateOptions;
- (id)toolControllerSpec;
- (void)_updateVisibleCells;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
