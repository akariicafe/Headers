@class PHPhotoLibrary, PXPersonsSectionedDataSource, NSString;

@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXPersonsSectionedDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)reloadData;
- (long long)_personTypeForSection:(long long)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)createInitialDataSource;
- (void).cxx_destruct;

@end
