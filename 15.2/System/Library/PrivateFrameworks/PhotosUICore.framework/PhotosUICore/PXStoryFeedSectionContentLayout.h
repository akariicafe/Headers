@class PXStoryFeedSublayoutComposition, PXStoryFeedAutoplayController, PXStoryFeedViewModel, PXSectionedDataSource, NSString, PXSectionedDataSourceChangeDetails;
@protocol PXStoryFeedItemLayoutFactory;

@interface PXStoryFeedSectionContentLayout : PXGCompositeLayout <PXGSublayoutProvider, PXGLayoutContentSource, PXChangeObserver, PXTapToRadarDiagnosticProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXSectionedDataSourceChangeDetails *_lastChangeDetails;
    PXSectionedDataSource *_presentedDataSource;
    struct { BOOL setItemLayoutShouldAutoplayContentVideoTimeRange; BOOL setItemLayoutIsTouched; BOOL shouldReloadItemLayoutForChangedItemFromIndexPathInDataSourceToIndexPathInDataSource; BOOL itemPlacementControllerForItemReferenceItemLayout; } _itemLayoutFactoryRespondsTo;
}

@property (readonly, nonatomic) PXStoryFeedSublayoutComposition *composition;
@property (readonly, nonatomic) id<PXStoryFeedItemLayoutFactory> itemLayoutFactory;
@property (readonly, nonatomic) PXStoryFeedAutoplayController *autoplayController;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willUpdate;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)axSpriteIndexes;
- (void)visibleRectDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)didUpdate;
- (long long)scrollableAxis;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void)update;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)a0;
- (void)didUpdateSublayouts;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (BOOL)axShouldSearchLeafsInSubgroups;
- (void)_invalidateCompositionParameters;
- (void)_updateCompositionParameters;
- (id)initWithViewModel:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (BOOL)_handlePrimaryActionForItemAtIndex:(long long)a0;
- (id /* block */)_handleTouchForItemAtIndex:(long long)a0;
- (void)_invalidateFeedSublayouts;
- (void)_updateFeedSublayouts;
- (void)_updateFeedSprites;
- (void)_invalidateAutoplayControllerParameters;
- (void)_updateAutoplayControllerParameters;
- (void)_invalidateItemLayoutParameters;

@end
