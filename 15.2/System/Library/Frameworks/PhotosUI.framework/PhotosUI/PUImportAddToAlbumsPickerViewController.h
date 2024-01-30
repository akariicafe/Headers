@class PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, NSString, PXPhotoKitCollectionsDataSourceManagerConfiguration, PUImportAddToAlbumsPickerCell, NSIndexPath, PHCollection;
@protocol PXImportAlbumPickerDelegate;

@interface PUImportAddToAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate> {
    PHCollection *_selectedCollection;
    NSIndexPath *_selectedIndex;
    PUImportAddToAlbumsPickerCell *_selectedCell;
    PHCollection *_createdAlbum;
    BOOL _needsDatasourceUpdate;
}

@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration;
@property (weak, nonatomic) id<PXImportAlbumPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)dataSourceOffset;
+ (id)dataSourceShiftedIndexPath:(id)a0;
+ (unsigned long long)cellTypeForPosition:(id)a0;
+ (id)userCreatredAlbumsPhotoKitConfiguration;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (id /* block */)completionHandler;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)hostViewContoller;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canPresentPicker;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)createAlbumListViewController;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)albumListViewControllerSpec;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateDatasource;
- (double)_heightForIndex:(id)a0;
- (void)_selectCell:(id)a0;
- (id)posterImageForCollection:(id)a0 cell:(id)a1 forCellType:(unsigned long long)a2;
- (id)addAlbumPlaceHolder:(struct CGSize { double x0; double x1; })a0 newAlbum:(BOOL)a1;
- (void)selectCollection:(id)a0;
- (void)configureDataSourceManagerConfiguration:(id)a0;
- (void)_handleCreateAlbum;
- (void)_dismissPicker;

@end
