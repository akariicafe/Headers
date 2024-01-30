@class NSString, PHFetchResult;

@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) PHFetchResult *importSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_updateFlowLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 traitCollection:(id)a2;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_updateTitle;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)photoLibraryDidChange:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void)_scrollToBottom:(id)a0;
- (id)_assetForIndexPath:(id)a0;
- (id)_assetsForSection:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_reloadData;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
