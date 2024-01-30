@class NSString, NSArray, NSMutableArray;

@interface PUCurationKeyAssetComparisonDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray *_highlights;
    NSMutableArray *_currentKeyAssets;
    NSMutableArray *_legacyKeyAssets;
    NSMutableArray *_modernKeyAssets;
    NSMutableArray *_keyAssetReasons;
    NSMutableArray *_indexMap;
    NSArray *_visibleAssets;
    BOOL _showsDifferentOnly;
    BOOL _showsMeaningsOnly;
    BOOL _canLiveUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapHeaderView:(id)a0;
- (void)viewDidLoad;
- (BOOL)shouldShowSectionHeaders;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateData;
- (void)_fetchHighlights;
- (void)toggleShowsDifferentOnly:(id)a0;
- (void)toggleShowsMeaningsOnly:(id)a0;

@end
