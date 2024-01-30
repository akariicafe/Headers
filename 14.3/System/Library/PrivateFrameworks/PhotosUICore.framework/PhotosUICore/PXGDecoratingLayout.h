@class PXGLayout, NSMutableIndexSet;
@protocol PXGLayoutContentSource, PXGDebugDecorationSource, PXGDragDecorationSource, PXGCaptionDecorationSource, PXGHighlightDecorationSource, PXGAssetBadgeDecorationSource, PXGShadowSource, PXGSelectionDecorationSource;

@interface PXGDecoratingLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    BOOL _isUpdatingDecoratedLayout;
    NSMutableIndexSet *_invalidatedDecoratedSpriteIndexes;
    BOOL _wantsCaptionDecorations;
    long long _selectionDecorationStyle;
    unsigned long long _selectionDecorationOptions;
    id<PXGShadowSource> _shadowSource;
    BOOL _isChangingDecoratedLayout;
}

@property (readonly, nonatomic) unsigned int numberOfDecoratingSpritesPerDecoratedSprite;
@property (readonly, weak, nonatomic) id<PXGAssetBadgeDecorationSource> assetBadgeDecorationSource;
@property (readonly, weak, nonatomic) id<PXGAssetBadgeDecorationSource> assetProgressDecorationSource;
@property (readonly, weak, nonatomic) id<PXGCaptionDecorationSource> captionDecorationSource;
@property (readonly, weak, nonatomic) id<PXGSelectionDecorationSource> selectionDecorationSource;
@property (readonly, weak, nonatomic) id<PXGHighlightDecorationSource> highlightDecorationSource;
@property (readonly, weak, nonatomic) id<PXGDragDecorationSource> dragDecorationSource;
@property (readonly, weak, nonatomic) id<PXGDebugDecorationSource> debugDecorationSource;
@property (readonly, nonatomic) unsigned int debugDecorationIndex;
@property (retain, nonatomic) PXGLayout *decoratedLayout;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<PXGLayoutContentSource> decorationSource;

- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (BOOL)canHandleVisibleRectRejection;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)safeAreaInsetsDidChange;
- (id)layoutForItemChanges;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (id)itemsLayout;
- (void)alphaDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)init;
- (void)referenceSizeDidChange;
- (void)_updateReloadSprites;
- (void).cxx_destruct;
- (id)axSpriteIndexes;
- (void)_updateDecoratedLayout;
- (void)screenScaleDidChange;
- (void)update;
- (unsigned int)spriteIndexForDecorationIndex:(unsigned int)a0 decoratingSpriteIndex:(unsigned int)a1;
- (void)visibleRectDidChange;
- (struct PXGDecorationSpriteInfo { long long x0; double x1; })decorationSpriteInfoForDecoratedSpriteIndex:(unsigned int)a0 decorationIndex:(unsigned int)a1 assetBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a2 isItemSelected:(BOOL)a3 isItemHighlighted:(BOOL)a4 isItemDragged:(BOOL)a5;
- (void)setLastBaseline:(double)a0;
- (BOOL)isSpriteIndex:(unsigned int)a0 decoratingSpriteWithIndex:(out unsigned int *)a1;
- (void)_applyDecoratedLayoutChangeDetails:(id)a0;
- (void)insertSublayout:(id)a0 atIndex:(long long)a1;
- (id)description;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)setContentSource:(id)a0;
- (void)_updateDecorationSources;
- (BOOL)spritesAreInSyncWithDecoratedLayout;
- (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void)_updateDecorationSprites;
- (void)sublayout:(id)a0 didApplySpriteChangeDetails:(id)a1 fromDescendentSublayout:(id)a2;
- (id)initWithDecoratedLayout:(id)a0;
- (double)lastBaseline;

@end
