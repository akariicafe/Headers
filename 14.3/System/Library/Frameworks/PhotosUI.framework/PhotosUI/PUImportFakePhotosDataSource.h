@class PXImportAssetsDataSource;

@interface PUImportFakePhotosDataSource : PXPhotosDataSource

@property (retain, nonatomic) PXImportAssetsDataSource *importDataSource;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)a0 reverseOrder:(BOOL)a1;
- (id)initWithImportDataSource:(id)a0;

@end
