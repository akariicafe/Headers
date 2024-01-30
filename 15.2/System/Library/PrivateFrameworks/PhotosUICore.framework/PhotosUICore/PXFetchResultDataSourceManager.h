@class NSString, PHFetchResult, PHPhotoLibrary, PXFetchResultDataSource;

@interface PXFetchResultDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult *_currentFetchResult;
}

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXFetchResultDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)initWithInitialFetchResult:(id)a0;
- (void)setFetchResult:(id)a0 changeDetails:(id)a1;

@end
