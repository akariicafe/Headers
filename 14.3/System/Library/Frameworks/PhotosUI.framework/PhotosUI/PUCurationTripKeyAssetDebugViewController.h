@class PUCurationTripKeyAssetBrowserDebugViewController, PHFetchResult;

@interface PUCurationTripKeyAssetDebugViewController : PUPhotosAlbumViewController {
    PUCurationTripKeyAssetBrowserDebugViewController *_assetCollectionViewController;
    PHFetchResult *_tripHighlights;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)updateSpec;
- (void)_fetchHighlights;
- (void)viewDidLoad;

@end
