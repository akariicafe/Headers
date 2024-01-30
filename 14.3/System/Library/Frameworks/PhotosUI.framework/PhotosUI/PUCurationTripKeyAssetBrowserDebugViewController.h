@class NSString, PHPhotosHighlight, PHFetchResult;

@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    NSString *_tripKeyAssetUUID;
    PHFetchResult *_childHighlights;
}

@property (retain, nonatomic) PHPhotosHighlight *tripHighlight;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_update;
- (BOOL)updateSpec;
- (void)viewDidLoad;

@end
