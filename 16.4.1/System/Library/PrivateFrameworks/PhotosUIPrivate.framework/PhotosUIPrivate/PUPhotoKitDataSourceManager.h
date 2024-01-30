@class NSString, PXPhotosDataSource;

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager <PXPhotosDataSourceChangeObserver>

@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (void)updateWithPhotosDataSource:(id)a0 andDataSourceChange:(id)a1;
- (void)dealloc;
- (id)init;
- (id)photosDataSourceInterestingAssetReferences:(id)a0;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (id)initWithPhotosDataSource:(id)a0;
- (void).cxx_destruct;

@end
