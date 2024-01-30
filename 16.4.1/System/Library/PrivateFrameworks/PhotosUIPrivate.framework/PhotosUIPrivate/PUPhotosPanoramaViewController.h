@class PHAssetCollection, PUPhotosPanoramaViewControllerSpec, PUSectionedGridLayout;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController

@property (readonly, nonatomic) PUSectionedGridLayout *mainGridLayout;
@property (retain, nonatomic) PHAssetCollection *userPanoAlbum;
@property (retain, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec;

- (id)initWithSpec:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBeginStackCollapseTransition;
- (void)_configureCollectionViewGridLayout:(id)a0;
- (void)_updatePhotoDecorationForCell:(id)a0 animated:(BOOL)a1;
- (long long)cellFillMode;
- (void)configureGlobalFooterView:(id)a0;
- (void)configureGridCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (id)imageRequestOptionsForAsset:(id)a0 pixelSize:(inout struct CGSize { double x0; double x1; } *)a1;
- (struct CGSize { double x0; double x1; })maximumThumbnailRequestSize;
- (id)newGridLayout;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)a0 withAsset:(id)a1;
- (void)updateLayoutMetrics;
- (void)updatePhotoViewContent:(id)a0 withThumbnailImage:(id)a1;
- (BOOL)updateSpec;
- (BOOL)wantsGlobalFooter;

@end
