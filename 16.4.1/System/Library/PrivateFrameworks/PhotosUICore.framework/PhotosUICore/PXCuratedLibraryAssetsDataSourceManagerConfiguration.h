@class PHPhotoLibrary;

@interface PXCuratedLibraryAssetsDataSourceManagerConfiguration : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)configurationWithPhotoLibrary:(id)a0;
+ (id)configurationWithYearsAssetsDataSourceManager:(id)a0 monthsAssetsDataSourceManager:(id)a1 daysAssetsDataSourceManager:(id)a2 allPhotosAssetsDataSourceManager:(id)a3;

- (id)configurationForZoomLevel:(long long)a0;
- (id)keyAssetCollectionReferenceInDataSource:(id)a0 zoomLevel:(long long)a1 matchingAssetCollectionReference:(id)a2 fromDataSource:(id)a3 zoomLevel:(long long)a4;

@end
