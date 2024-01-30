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

+ (unsigned long long)cellTypeForPosition:(id)a0;
+ (long long)dataSourceOffset;
+ (id)dataSourceShiftedIndexPath:(id)a0;
+ (id)userCreatredAlbumsPhotoKitConfiguration;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id /* block */)completionHandler;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)init;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)albumListViewControllerSpec;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_dismissPicker;
- (void)_handleCreateAlbum;
- (double)_heightForIndex:(id)a0;
- (void)_selectCell:(id)a0;
- (id)addAlbumPlaceHolder:(struct CGSize { double x0; double x1; })a0 newAlbum:(BOOL)a1;
- (BOOL)canPresentPicker;
- (void)configureDataSourceManagerConfiguration:(id)a0;
- (id)createAlbumListViewController;
- (id)hostViewContoller;
- (id)posterImageForCollection:(id)a0 cell:(id)a1 forCellType:(unsigned long long)a2;
- (void)selectCollection:(id)a0;
- (void)updateDatasource;

@end
