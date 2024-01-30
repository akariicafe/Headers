@class PXAssetsDataSourceManager;

@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PXAssetsDataSourceManager *_yearsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_monthsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_daysAssetsDataSourceManager;
    PXAssetsDataSourceManager *_allPhotosAssetsDataSourceManager;
}

- (id)configurationForZoomLevel:(long long)a0;
- (void).cxx_destruct;
- (id)initWithYearsAssetsDataSourceManager:(id)a0 monthsAssetsDataSourceManager:(id)a1 daysAssetsDataSourceManager:(id)a2 allPhotosAssetsDataSourceManager:(id)a3;

@end
