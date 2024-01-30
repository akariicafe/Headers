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

- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_invalidateDataSource;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)assetEditOperationManager:(id)a0 didChangeEditOperationsPerformedOnAsset:(id)a1 context:(void *)a2;
- (void)_updateDataSourceIfNeeded;
- (id)initWithAsset:(id)a0 editOperationManager:(id)a1;
- (id)_variationOptionWithType:(long long)a0 asset:(id)a1;
- (void)_invalidatePendingVariationType;
- (void)_updatePendingVariationTypeIfNeeded;
- (void)_invalidateCurrentVariationType;
- (void)_updateCurrentVariationTypeIfNeeded;
- (void)_assetEditOperationsDidChange;

@end
