@class NSString, NSMutableArray, VUIMediaLibrary;

@interface VUIMPLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate>

@property (retain, nonatomic) NSMutableArray *fetchedDataSources;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)startFetch;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)_addRentalsUpdateNotificationObserver;
- (void)_removeRentalsUpdateNotificationObserver;
- (id)_dataSourceForShelves;
- (void)_updateRentalShelf;
- (id)initWithValidShelfTypes:(id)a0 forMediaLibrary:(id)a1;

@end
