@class PXPhotosLayoutSpec, NSString, PXPhotosViewModel, NSIndexSet, PXAssetsDataSource;
@protocol PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosSectionedLayout : PXGStackLayout <PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingSublayouts;
    struct { BOOL floatingHeaderSnapshot; BOOL configureSectionHeaderLayout; } _headerProviderRespondsTo;
    long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
    long long _numberOfForcedSections;
}

@property (nonatomic) double interSectionSpacing;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (readonly, nonatomic) id<PXPhotosSectionHeaderLayoutProvider> headerLayoutProvider;
@property (readonly, nonatomic) id<PXPhotosSectionBodyLayoutProvider> bodyLayoutProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allowsSublayoutUpdateCycleAssertions;
- (BOOL)allowsDanglingUpdatesAssertions;
- (void)_updateSublayoutsConfiguration;
- (void)_updateSublayoutGridConfiguratorForLayout:(id)a0;
- (id)_createAnimationForChangeFromDataSource:(id)a0 toDataSource:(id)a1 changeDetails:(id)a2;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldFaultInSection:(long long)a0 inDataSource:(id)a1;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (void)enumerateItemsGeometriesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 usingBlock:(id /* block */)a2;
- (id)presentedItemsGeometryForSection:(unsigned long long)a0 inDataSource:(id)a1;
- (id)axSpriteIndexes;
- (void)_performAddActionForSectionLayout:(id)a0;
- (void)_invalidateSublayoutsSpec;
- (void)_invalidateSublayoutsDataSource;
- (BOOL)_configureSectionLayout:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(id /* block */)a0;
- (void)_updateSublayoutsSpec;
- (void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)a0;
- (BOOL)layout:(id)a0 shouldPreventFaultOutOfSublayout:(id)a1;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)_invalidateSublayoutsConfiguration;
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithViewModel:(id)a0 headerProvider:(id)a1 bodyProvider:(id)a2;
- (void)photosSectionHeaderLayoutInvalidateConfiguredLayouts:(id)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)topmostHeaderSnapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)_updateSublayoutsDataSource;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (void)didFaultInSublayout:(id)a0 atIndex:(long long)a1 fromEstimatedContentSize:(struct CGSize { double x0; double x1; })a2;
- (void)assetSectionLayoutDidConfigureLayouts:(id)a0;
- (void).cxx_destruct;

@end
