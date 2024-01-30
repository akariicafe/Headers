@class PUSessionInfo, PUZoomableGridViewControllerSpec, PUCollectionViewIntermediateDataSource, NSString, NSMutableArray, PXPhotosDataSource;

@interface PUMomentsZoomLevelManager : NSObject <PXPhotosDataSourceChangeObserver> {
    NSMutableArray *_allLevelInfos;
    PXPhotosDataSource *_momentsDataSource;
    BOOL _isInvalidatingLayoutOfZoomLevels;
}

@property (readonly, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridSpec;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly, nonatomic) unsigned long long lowestZoomLevel;
@property (readonly, nonatomic) unsigned long long highestZoomLevel;
@property (readonly, nonatomic) unsigned long long preferredDefaultZoomLevel;
@property (readonly, nonatomic) PUCollectionViewIntermediateDataSource *sharedIntermediateDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpec:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)photosDataSource:(id)a0 didReceivePhotoLibraryChange:(id)a1;
- (void)_defaultsDidChange:(id)a0;
- (void)_updateSummarizeSectionsOnZoomLevelInfos;
- (id)existingViewControllerForZoomLevel:(unsigned long long)a0 inNavigationController:(id)a1;
- (id)jumpToZoomLevel:(unsigned long long)a0 inNavigationController:(id)a1 usingTopControllerConfigurationBlock:(id /* block */)a2;
- (void)markZoomInfosInvalidWithWidth:(double)a0;
- (id)momentsDataSource;
- (id)newViewControllerForZoomLevel:(unsigned long long)a0;
- (void)updateZoomableGridSpecForTraitCollection:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)zoomLevel:(unsigned long long)a0 isHigherThanZoomLevel:(unsigned long long)a1;
- (unsigned long long)zoomLevelAboveZoomLevel:(unsigned long long)a0;
- (unsigned long long)zoomLevelBelowZoomLevel:(unsigned long long)a0;
- (void)zoomLevelInfo:(id)a0 didInvalidateLayoutWithContext:(id)a1;
- (id)zoomLevelInfoForZoomLevel:(unsigned long long)a0;

@end
