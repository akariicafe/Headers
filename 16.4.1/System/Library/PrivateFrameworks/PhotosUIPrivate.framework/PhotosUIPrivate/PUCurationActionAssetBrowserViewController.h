@class PUCurationTraitContainer, NSMutableArray, PHPhotoLibrary;

@interface PUCurationActionAssetBrowserViewController : PUPhotosAlbumViewController

@property (retain, nonatomic) NSMutableArray *assetContainers;
@property (retain, nonatomic) PUCurationTraitContainer *traitContainer;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_update;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_globalHeaderTitle;
- (void)configureGlobalHeaderView:(id)a0;
- (double)globalHeaderHeight;
- (void)setTraitContainer:(id)a0 withFaces:(id)a1 detectionTraitsByFaceLocalIdentifier:(id)a2;

@end
