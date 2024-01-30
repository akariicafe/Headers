@class PUCurationTraitContainer, NSMutableArray, PHPhotoLibrary;

@interface PUCurationActionAssetBrowserViewController : PUPhotosAlbumViewController

@property (retain, nonatomic) NSMutableArray *assetContainers;
@property (retain, nonatomic) PUCurationTraitContainer *traitContainer;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)_globalHeaderTitle;
- (void)configureGlobalHeaderView:(id)a0;
- (double)globalHeaderHeight;
- (void).cxx_destruct;
- (void)_update;
- (void)setTraitContainer:(id)a0 withFaces:(id)a1 detectionTraitsByFaceLocalIdentifier:(id)a2;

@end
