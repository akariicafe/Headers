@class NSString, PHAsset, PXAssetVariationsDataSource, PXAssetEditOperationManager;

@interface PXAssetVariationsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXAssetEditOperationManagerObserver> {
    struct { BOOL pendingVariationType; BOOL currentVariationType; BOOL dataSource; } _needsUpdateFlags;
    BOOL _didCreateInitialDataSource;
}

@property (retain, nonatomic) PHAsset *currentAsset;
@property (nonatomic) long long pendingVariationType;
@property (nonatomic) long long currentVariationType;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) PXAssetEditOperationManager *editOperationManager;
@property (readonly, nonatomic) PXAssetVariationsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)_invalidateDataSource;
- (id)initWithAsset:(id)a0 editOperationManager:(id)a1;
- (id)_variationOptionWithType:(long long)a0 asset:(id)a1;
- (void)_invalidatePendingVariationType;
- (void)_updatePendingVariationTypeIfNeeded;
- (void)_invalidateCurrentVariationType;
- (void)_updateCurrentVariationTypeIfNeeded;
- (void)_assetEditOperationsDidChange;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_updateDataSourceIfNeeded;
- (void)assetEditOperationManager:(id)a0 didChangeEditOperationsPerformedOnAsset:(id)a1 context:(void *)a2;

@end
