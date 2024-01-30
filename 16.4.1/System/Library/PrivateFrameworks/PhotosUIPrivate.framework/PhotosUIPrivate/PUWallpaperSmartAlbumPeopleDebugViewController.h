@class NSArray, NSString, PXWallpaperSmartAlbumPeoplePickerDataSource, PUWallpaperDebugViewSpec;

@interface PUWallpaperSmartAlbumPeopleDebugViewController : UICollectionViewController <PXWallpaperSmartAlbumPeoplePickerDataSourceChangeObserver>

@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec;
@property (retain, nonatomic) PXWallpaperSmartAlbumPeoplePickerDataSource *dataSource;
@property (retain, nonatomic) NSArray *dataSourceEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotate;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)initWithSpec:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)wallpaperSmartAlbumPeoplePickerDataSourceChanged:(id)a0;
- (void)_updateDisplayDataSource;

@end
