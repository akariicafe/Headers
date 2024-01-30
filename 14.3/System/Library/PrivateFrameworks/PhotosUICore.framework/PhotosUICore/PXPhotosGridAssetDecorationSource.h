@class PXGLayout, NSString, PXAssetBadgeManager, PXAssetsDataSource, NSSet, PXGGridLayout, NSMutableSet, PXSelectionSnapshot, PXLoadingStatusManager, NSIndexSet, PXGItemsLayout;

@interface PXPhotosGridAssetDecorationSource : NSObject <PXGShadowSource, PXLoadingStatusManagerObserver, PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGDragDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetRequestObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    NSIndexSet *_draggedItems;
    NSMutableSet *_assetUUIDsInCloud;
    PXAssetBadgeManager *_badgeManager;
    BOOL _forceBadgesOnAllAssets;
}

@property (readonly, nonatomic) PXGGridLayout *decoratedGridLayout;
@property (readonly, nonatomic) PXGItemsLayout *decoratedItemsLayout;
@property (nonatomic, getter=isSelectionLimitReached) BOOL selectionLimitReached;
@property (weak, nonatomic) PXGLayout *decoratedLayout;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, nonatomic) long long section;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (copy, nonatomic) NSSet *draggedAssetReferences;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic) unsigned long long forbiddenBadges;
@property (nonatomic) BOOL durationAlwaysHidden;
@property (nonatomic) BOOL hidesInteractiveFavoriteBadges;
@property (nonatomic) BOOL wantsDimmedSelectionStyle;
@property (nonatomic) long long interItemSpacingThresholdForExteriorFocusRingSelection;
@property (copy, nonatomic) NSIndexSet *itemsWithCoveredBottomTrailingCorner;
@property (nonatomic) BOOL enableDebugDecoration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataSource:(id)a0 section:(long long)a1;
- (void)_updateDragDecoration;
- (id)init;
- (void).cxx_destruct;
- (long long)selectionDecorationStyleInLayout:(id)a0;
- (id)debugDecorationAtSpriteIndex:(unsigned int)a0 asset:(id)a1 inLayout:(id)a2;
- (BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)a0;
- (id)selectedSpriteIndexesInLayout:(id)a0;
- (BOOL)wantsDebugDecorationInLayout:(id)a0;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })assetBadgeInfoForAsset:(id)a0 atSpriteIndex:(unsigned int)a1 inLayout:(id)a2;
- (void)_invalidateProgressDecoration;
- (void)update;
- (BOOL)wantsAssetBadgeDecorationsInLayout:(id)a0;
- (void)_invalidateDragDecoration;
- (id)shadowForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)loadingStatusManager:(id)a0 didUpdateLoadingStatus:(id)a1 forItem:(id)a2;
- (void)observeIsInCloud:(BOOL)a0 forDisplayAsset:(id)a1;
- (id)draggingSpriteIndexesInLayout:(id)a0;
- (id)_spriteIndexesForItems:(id)a0 inLayout:(id)a1;
- (BOOL)wantsCaptionDecorationsInLayout:(id)a0;
- (id)loadStatusForAsset:(id)a0 atSpriteIndex:(unsigned int)a1 inLayout:(id)a2;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;

@end
