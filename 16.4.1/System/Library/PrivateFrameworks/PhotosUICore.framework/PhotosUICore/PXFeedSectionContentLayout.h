@class PXSectionedDataSource, PXFeedViewModel, PXFeedAutoplayController, PXFeedSublayoutComposition, NSString, PXSectionedDataSourceChangeDetails;
@protocol PXFeedItemLayoutFactory;

@interface PXFeedSectionContentLayout : PXGCompositeLayout <PXGSublayoutProvider, PXGLayoutContentSource, PXChangeObserver, PXTapToRadarDiagnosticProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXSectionedDataSourceChangeDetails *_lastChangeDetails;
    PXSectionedDataSource *_presentedDataSource;
    struct { BOOL setItemLayoutShouldAutoplayContentVideoTimeRange; BOOL setItemLayoutIsTouched; BOOL setItemLayoutIsHovered; BOOL shouldReloadItemLayoutForChangedItemFromIndexPathInDataSourceToIndexPathInDataSource; BOOL configureItemLayoutForChangedItemFromIndexPathInDataSourceToIndexPathInDataSource; BOOL itemPlacementControllerForItemReferenceItemLayout; } _itemLayoutFactoryRespondsTo;
}

@property (readonly, nonatomic) PXFeedSublayoutComposition *composition;
@property (readonly, nonatomic) id<PXFeedItemLayoutFactory> itemLayoutFactory;
@property (readonly, nonatomic) PXFeedAutoplayController *autoplayController;
@property (nonatomic) long long presentedRootLayoutOrientation;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)didUpdate;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (long long)scrollableAxis;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)init;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (void)willUpdate;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)a0;
- (id /* block */)_handleHoverForItemAtIndex:(long long)a0;
- (BOOL)_handlePresentMenuActionForIndex:(long long)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (BOOL)_handlePrimaryActionForItemAtIndex:(long long)a0;
- (id /* block */)_handleTouchForItemAtIndex:(long long)a0;
- (void)_invalidateAutoplayControllerParameters;
- (void)_invalidateCompositionParameters;
- (void)_invalidateFeedSublayouts;
- (void)_invalidatePresentedRootLayoutOrientation;
- (void)_updateAutoplayControllerParameters;
- (void)_updateCompositionParameters;
- (void)_updateFeedSprites;
- (void)_updateFeedSublayouts;
- (void)_updatePresentedRootLayoutOrientation;
- (double)alphaForSublayout:(id)a0 atIndex:(long long)a1;
- (BOOL)axShouldSearchLeafsInSubgroups;
- (void)didUpdateSublayouts;
- (id)initWithViewModel:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)localHiddenSpriteIndexesDidChange;
- (BOOL)wantsCustomAlphaForSublayouts;

@end
