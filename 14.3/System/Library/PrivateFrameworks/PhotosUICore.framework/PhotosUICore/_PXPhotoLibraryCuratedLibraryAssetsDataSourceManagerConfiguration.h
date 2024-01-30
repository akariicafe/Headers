@class PHPhotoLibrary;

@interface _PXPhotoLibraryCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PHPhotoLibrary *_photoLibrary;
}

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)configurationForZoomLevel:(long long)a0;

@end
