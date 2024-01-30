@class PXCuratedLibraryAssetsDataSourceManagerConfiguration, NSString, NSPredicate, PXUpdater, PXAssetsDataSourceManager, PXAssetsDataSource, PXVisualPositionsChangeDetails, PXPhotoKitAssetsDataSourceManager, NSDictionary;
@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver> {
    struct { BOOL isSelectingAssets; BOOL visibleAssetCollections; BOOL willTransitionFromZoomLevelToZoomLevel; BOOL didTransitionFromZoomLevelToZoomLevel; BOOL dominantAssetCollectionReferenceForZoomLevel; BOOL transitionTypeFromZoomLevelToZoomLevel; } _delegateRespondsTo;
    NSDictionary *_dataSourceManagerByZoomLevel;
    BOOL _isForcingSections;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManagerConfiguration *configuration;
@property (nonatomic) BOOL canLoadData;
@property (nonatomic) long long zoomLevelForCurrentDataSourceManager;
@property (nonatomic) BOOL wantsCuration;
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource;
@property (readonly, nonatomic) PXAssetsDataSourceManager *currentAssetsDataSourceManager;
@property (nonatomic) long long currentDataSourceZoomLevel;
@property (retain, nonatomic) PXVisualPositionsChangeDetails *lastVisualPositionsChangeDetails;
@property (nonatomic) long long lastTransitionType;
@property (nonatomic) unsigned long long lastVisualPositionsChangeFromDataSourceIdentifier;
@property (nonatomic) unsigned long long lastVisualPositionsChangeToDataSourceIdentifier;
@property (weak, nonatomic) id<PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate;
@property (readonly, nonatomic) long long zoomLevel;
@property (readonly, nonatomic) NSPredicate *allPhotosFilterPredicate;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *currentPhotoKitAssetsDataSourceManager;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (void)_updateDataSource;
- (void)_invalidateDataSource;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)loadIfNeeded;
- (void)setTransientKeyAsset:(id)a0 forAssetCollection:(id)a1 zoomLevel:(long long)a2;
- (void)_updateDataSourceManagers;
- (id)dataSourceManagerForZoomLevel:(long long)a0;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0 inZoomLevel:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (id)assetsInAssetCollection:(id)a0;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)a0 withParentAssetCollectionReference:(id)a1 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)a2;
- (void)setNeedsUpdate;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)didPerformChanges;
- (id)visualPositionsChangeDetailsFromDataSourceIdentifier:(unsigned long long)a0 toDataSourceIdentifier:(unsigned long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setZoomLevel:(long long)a0;
- (unsigned long long)libraryStateForZoomLevel:(long long)a0;
- (void)_invalidatePropertiesDerivedFromZoomLevel;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (BOOL)forceAllPhotosAccurateIfNeeded;
- (id)initWithConfiguration:(id)a0;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)a0 withParentAssetCollectionReference:(id)a1;
- (id)pauseChangeDeliveryWithTimeout:(double)a0;
- (id)dataSourceForZoomLevel:(long long)a0;
- (void)setAllPhotosFilterPredicate:(id)a0;
- (void)_invalidateCuration;
- (void)_updateCuration;
- (long long)transitionTypeFromDataSourceIdentifier:(unsigned long long)a0 toDataSourceIdentifier:(unsigned long long)a1;
- (id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)a0 withParent:(id)a1;
- (void)resumeChangeDelivery:(id)a0;
- (void)_invalidateDataSourceManagers;
- (id)_photosDataSourceForZoomLevel:(long long)a0;
- (void)_updatePropertiesDerivedFromZoomLevel;

@end
