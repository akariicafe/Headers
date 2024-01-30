@class PHPhotoLibrary;

@interface _PXPhotoLibraryCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PHPhotoLibrary *_photoLibrary;
}

- (id)configurationForZoomLevel:(long long)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;

@end
