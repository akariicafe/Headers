@class PXMiroMovieProvider, NSSet, PHFetchResult, NSString, PXPhotosDataSource;

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager <PXPhotosDataSourceChangeObserver> {
    PXPhotosDataSource *_curatedPhotosDataSource;
    PXMiroMovieProvider *_miroMovieProvider;
}

@property (retain, nonatomic, setter=_setPhotosGraphCurationAssets:) PHFetchResult *_photosGraphCurationAssets;
@property (retain, nonatomic, setter=_setMiroCurationAssets:) NSSet *_miroCurationAssets;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateAssets;
- (BOOL)_isAssetContainedInMiroCuration:(id)a0;
- (BOOL)_isAssetContainedInPhotosGraphCuration:(id)a0;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })badgeInfoForAsset:(id)a0 inCollection:(id)a1 options:(unsigned long long)a2;
- (void)photosDataSource:(id)a0 didChange:(id)a1;

@end
