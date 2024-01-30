@class NSString, PXPhotosDataSource;

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager <PXPhotosDataSourceChangeObserver>

@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhotosDataSource:(id)a0;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)photosDataSourceInterestingAssetReferences:(id)a0;
- (void)updateWithPhotosDataSource:(id)a0 andDataSourceChange:(id)a1;

@end
