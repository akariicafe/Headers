@class NSString, PXPhotosDataSource;

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager <PXPhotosDataSourceChangeObserver>

@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)photosDataSourceInterestingAssetReferences:(id)a0;
- (void)updateWithPhotosDataSource:(id)a0 andDataSourceChange:(id)a1;
- (id)initWithPhotosDataSource:(id)a0;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)photosDataSource:(id)a0 didChange:(id)a1;

@end
