@class NSString, PHPhotosHighlight, PHFetchResult;

@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    NSString *_tripKeyAssetUUID;
    PHFetchResult *_childHighlights;
}

@property (retain, nonatomic) PHPhotosHighlight *tripHighlight;

- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)updateSpec;
- (void).cxx_destruct;
- (void)_update;

@end
