@class PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, NSString, PXPhotoKitCollectionsDataSourceManagerConfiguration, PHCollection;
@protocol PXImportAlbumPickerDelegate;

@interface PUImportAddToLibraryAndAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate> {
    PHCollection *_selectedCollection;
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

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id /* block */)completionHandler;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (void)_dismissPicker;
- (void)_updateDatasource;
- (id)_userCreatredAlbumsPhotoKitConfiguration;
- (BOOL)canPresentPicker;
- (void)configureDataSourceManagerConfiguration:(id)a0;
- (id)hostViewContoller;
- (id)posterImageForCollection:(id)a0 indexPath:(id)a1 forCellType:(unsigned long long)a2;

@end
