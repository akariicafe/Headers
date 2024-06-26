@class PXAssetsSectionLayoutSpec, PXGBurstStackEffect, PXAssetCollectionReference, PXCuratedLibraryShowAllActionPerformer, PXIndexPathSet, PXCuratedLibraryActionManager, PXCuratedLibraryOverlayButtonConfiguration, PXSelectionSnapshot, PXAssetsDataSource, NSSet, PXPhotosGridAssetDecorationSource, PXGLayout, PXCuratedLibraryActionPerformer, PXLoadingStatusManager, NSString, PXGLayoutGuide, PXAssetsSectionConfigurator, PXAssetReference, PXCuratedLibrarySectionHeaderLayout;
@protocol PXTapbackStatusManager, PXGItemsGeometry, PXDisplayAssetCollection, PXAssetSectionLayoutDelegate, PXDisplayAssetFetchResult;

@interface PXAssetsSectionLayout : PXGSplitLayout <PXChangeObserver, PXGShadowSource, PXGViewSource, PXGDisplayAssetSource, PXGGeneratedLayoutDelegate, PXGItemsLayoutDelegate, PXCuratedLibraryRowBasedLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned int _sectionBoundariesSpriteIndex;
    unsigned int _sectionShadowSpriteIndex;
    unsigned int _showAllButtonSpriteIndex;
    unsigned short _showAllButtonVersion;
    struct CGSize { double width; double height; } _cachedShowAllButtonConfigurationSize;
    unsigned int _selectAllButtonSpriteIndex;
    unsigned short _selectAllButtonVersion;
    struct CGSize { double width; double height; } _cachedSelectAllButtonConfigurationSize;
    PXCuratedLibrarySectionHeaderLayout *_sectionHeaderLayout;
    BOOL _isLastSection;
    BOOL _isUpdatingLocalSprites;
    BOOL _showAllButtonConfigurationIsValid;
    BOOL _selectAllButtonConfigurationIsValid;
    PXAssetCollectionReference *_assetCollectionReference;
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedClampedItemRange;
    id<PXDisplayAssetFetchResult> _cachedClampedFetchResult;
    PXGBurstStackEffect *_burstStackEffect;
}

@property (retain, nonatomic) PXAssetsSectionConfigurator *configurator;
@property (retain, nonatomic) PXGLayout *bodyContainerLayout;
@property (nonatomic) BOOL allowsPositionDependentHeaderContentOpacity;
@property (nonatomic) double distanceBetweenTitleTopAndBodyBottom;
@property (nonatomic) double distanceBetweenHeaderTopAndNextBodyTop;
@property (readonly, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *showAllButtonConfiguration;
@property (readonly, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *selectAllButtonConfiguration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } showAllButtonFrame;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } sectionIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } presentedSectionIndexPath;
@property (readonly, nonatomic) BOOL presentedSkimming;
@property (retain, nonatomic) PXGLayout *headerLayout;
@property (readonly, nonatomic) BOOL isCurated;
@property (readonly, nonatomic) long long numberOfAssets;
@property (readonly, nonatomic) long long keyItemIndex;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> keyAssetsFetchResult;
@property (nonatomic) double intersectionSpacing;
@property (readonly, nonatomic) PXGBurstStackEffect *burstStackEffect;
@property (weak, nonatomic) id<PXAssetSectionLayoutDelegate> delegate;
@property (nonatomic) long long zoomLevel;
@property (nonatomic) long long targetZoomLevel;
@property (retain, nonatomic) PXAssetsSectionLayoutSpec *spec;
@property (readonly, nonatomic) long long section;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, nonatomic) PXPhotosGridAssetDecorationSource *assetDecorationSource;
@property (nonatomic) BOOL itemCaptionsVisible;
@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (copy, nonatomic) NSSet *draggedAssetReferences;
@property (retain, nonatomic) id<PXTapbackStatusManager> tapbackStatusManager;
@property (nonatomic) BOOL isSelecting;
@property (nonatomic) BOOL canStartSelecting;
@property (nonatomic) long long numberOfPrecedingAssets;
@property (nonatomic) BOOL wantsShadow;
@property (nonatomic) BOOL wantsDimmedSelectionStyle;
@property (nonatomic) BOOL wantsNumberedSelectionStyle;
@property (nonatomic) BOOL wantsFileSizeBadge;
@property (retain, nonatomic) PXCuratedLibraryShowAllActionPerformer *showAllActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *selectAllActionPerformer;
@property (retain, nonatomic) NSString *selectAllButtonTitle;
@property (copy, nonatomic) id /* block */ addContentActionHandler;
@property (retain, nonatomic) PXGLayoutGuide *headerLayoutGuide;
@property (nonatomic) BOOL removesHeaderLayoutWhenEmpty;
@property (nonatomic) BOOL removesContentLayoutWhenEmpty;
@property (retain, nonatomic) NSString *axLocalizedBaseLabel;
@property (nonatomic) BOOL showsSkimmingSlideshow;
@property (nonatomic) BOOL showsSkimmingInteraction;
@property (nonatomic) BOOL isSkimming;
@property (retain, nonatomic) PXIndexPathSet *skimmingIndexPaths;
@property (nonatomic) long long maxSkimmingIndex;
@property (nonatomic) long long currentSkimmingIndex;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) PXGLayout *bodyContentLayout;
@property (readonly, nonatomic) id<PXGItemsGeometry> bodyItemsGeometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double buildingRowContentHeight;
@property (readonly, nonatomic) double buildingRowSpacing;

+ (struct CGSize { double x0; double x1; })estimatedSizeWithReferenceSize:(struct CGSize { double x0; double x1; })a0 assetCollection:(id)a1 numberOfAssets:(long long)a2 isCurated:(BOOL)a3 zoomLevel:(long long)a4 spec:(id)a5;

- (id)layoutForItemChanges;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (BOOL)allowsDanglingUpdatesAssertions;
- (void)_updateLocalSprites;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })itemsLayout:(id)a0 insetForItem:(long long)a1;
- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (id)_displayAssetForBodyItem:(long long)a0;
- (id)axSpriteIndexes;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateSectionHeaderProperties;
- (id)initWithSection:(long long)a0 dataSource:(id)a1 actionManager:(id)a2 loadingStatusManager:(id)a3 zoomLevel:(long long)a4 spec:(id)a5;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (void)_invalidateConfigurator;
- (void)_updateDistanceProperties;
- (id)initWithSection:(long long)a0 dataSource:(id)a1 spec:(id)a2;
- (void)_invalidateContent;
- (unsigned int)itemsLayout:(id)a0 effectIdForItem:(long long)a1;
- (void)_invalidateSelectAllButton;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)generatedLayout:(id)a0 inputItemAtIndex:(unsigned int)a1;
- (void)update;
- (BOOL)_shouldAnchorOnAssetCollection;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)enumerateRowsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_rowBasedBodyContentLayout;
- (void)_invalidateShowAllButtonPosition;
- (void)visibleRectDidChange;
- (void)_updateContent;
- (void)_updateConfigurator;
- (void)_updateSelectAllButtonPosition;
- (id)_assetReferenceClosestVisuallyToAssetReference:(id)a0;
- (id)axLocalizedLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemsLayout:(id)a0 bestCropRectForItem:(long long)a1 withAspectRatio:(double)a2;
- (void)_updateShowAllButtonPosition;
- (void)setDataSource:(id)a0 section:(long long)a1;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)itemsLayout:(id)a0 updateTagsInSpriteInfos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a1 forItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_updateAssetsWithCoveredBottomTrailingCorner;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })minSpriteSizeForPresentationStyle:(unsigned long long)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)shadowForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)setBodyContentLayout:(id)a0 wantsDecoration:(BOOL)a1;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (long long)itemsLayout:(id)a0 itemForObjectReference:(id)a1 options:(unsigned long long)a2;
- (void)_invalidateAssetsWithCoveredBottomTrailingCorner;
- (id)init;
- (double)itemsLayout:(id)a0 aspectRatioForItem:(long long)a1;
- (void)_callAddContentActionHandler;
- (void)_invalidateShowAllButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generatedLayout:(id)a0 bestCropRectForInputItemAtIndex:(unsigned int)a1 withAspectRatio:(double)a2;
- (id)generatedLayout:(id)a0 objectReferenceAtIndex:(unsigned int)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)itemsLayout:(id)a0 objectReferenceForItem:(long long)a1;
- (void)contentSizeDidChange;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_dataSourceIndexPathForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void).cxx_destruct;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)a0;
- (void)_updateDecorationSource;
- (struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })itemsLayout:(id)a0 cornerRadiusForItem:(long long)a1;
- (void)_invalidateSelectAllButtonPosition;
- (void)screenScaleDidChange;

@end
