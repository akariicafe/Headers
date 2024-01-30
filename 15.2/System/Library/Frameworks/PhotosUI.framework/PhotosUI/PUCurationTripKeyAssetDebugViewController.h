@class PUCurationTripKeyAssetBrowserDebugViewController, PHFetchResult;

@interface PUCurationTripKeyAssetDebugViewController : PUPhotosAlbumViewController {
    PUCurationTripKeyAssetBrowserDebugViewController *_assetCollectionViewController;
    PHFetchResult *_tripHighlights;
}

- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)updateSpec;
- (void).cxx_destruct;
- (id)init;
- (void)_fetchHighlights;

@end
