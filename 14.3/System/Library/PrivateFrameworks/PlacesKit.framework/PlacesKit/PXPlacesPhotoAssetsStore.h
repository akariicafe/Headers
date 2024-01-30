@class NSObject, NSArray, NSString, PHPhotoLibrary, PXPlacesStore, NSMutableArray;
@protocol OS_dispatch_queue, PXPlacesGeotaggedItemDataSource;

@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSArray *fetchResults;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PXPlacesStore *store;
@property (nonatomic) BOOL didInitiateLoad;
@property (nonatomic) BOOL didCompleteLoad;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFetchResults:(id)a0;
- (void)loadWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_handleAssetsImport;
- (void)_addItems:(id)a0 intoStore:(id)a1;

@end
