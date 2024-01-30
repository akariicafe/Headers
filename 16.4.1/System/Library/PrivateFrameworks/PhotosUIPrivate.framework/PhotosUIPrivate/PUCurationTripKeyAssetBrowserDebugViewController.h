@class NSString, PHFetchResult, NSDictionary, PHPhotosHighlight;

@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    NSString *_tripKeyAssetUUID;
    PHFetchResult *_childHighlights;
    NSDictionary *_iconicSceneScores;
}

@property (retain, nonatomic) PHPhotosHighlight *tripHighlight;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_update;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)updateSpec;

@end
