@class PHAssetCollection, PUPhotosPanoramaViewControllerSpec, PUSectionedGridLayout;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController

@property (readonly, nonatomic) PUSectionedGridLayout *mainGridLayout;
@property (retain, nonatomic) PHAssetCollection *userPanoAlbum;
@property (retain, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (id)initWithSpec:(id)a0;
- (BOOL)updateSpec;
- (void).cxx_destruct;
- (BOOL)wantsGlobalFooter;
- (id)newGridLayout;
- (long long)cellFillMode;
- (void)updateLayoutMetrics;
- (BOOL)canBeginStackCollapseTransition;
- (void)configureGlobalFooterView:(id)a0;
- (struct CGSize { double x0; double x1; })maximumThumbnailRequestSize;
- (void)configureGridCell:(id)a0 forItemAtIndexPath:(id)a1;
- (id)imageRequestOptionsForAsset:(id)a0 pixelSize:(inout struct CGSize { double x0; double x1; } *)a1;
- (void)_updatePhotoDecorationForCell:(id)a0 animated:(BOOL)a1;
- (void)_configureCollectionViewGridLayout:(id)a0;
- (void)updatePhotoViewContent:(id)a0 withThumbnailImage:(id)a1;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)a0 withAsset:(id)a1;

@end
