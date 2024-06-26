@class NSString;

@interface PXGOneColumnLayout : PXGItemsLayout <PXZoomablePhotosContentLayout, PXGItemsGeometry> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    BOOL _isUpdating;
    BOOL _didAlreadyUpdateLoadedItems;
}

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) BOOL enableBestCropRect;
@property (nonatomic) unsigned char mediaFlags;
@property (readonly, nonatomic) long long visualItemShift;
@property (readonly, nonatomic) double rowHeight;
@property (nonatomic) BOOL hideIncompleteLastRow;
@property (nonatomic) BOOL fillSafeAreaTopInset;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } loadedItems;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } loadedItemsRect;
@property (readonly, nonatomic) BOOL supportsContentMode;
@property (readonly, nonatomic) BOOL itemCaptionsVisible;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorViewportCenter;
@property (nonatomic) BOOL loadItemsOutsideAnchorViewport;
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) double accessoryAlpha;
@property (nonatomic) long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long anchorItem;
@property (nonatomic) struct CGPoint { double x; double y; } anchorItemCenter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) int mediaKind;
@property (nonatomic) int presentationType;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) BOOL enableBestCropRect;
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) double overrideAspectRatio;
@property (nonatomic) double overrideAspectRatioAmount;
@property (nonatomic) double aspectRatioLimit;
@property (nonatomic) BOOL fillSafeAreaTopInset;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;

- (BOOL)canHandleVisibleRectRejection;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;
- (void)_updateVisibleRect;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSpriteStyles;
- (void)alphaDidChange;
- (void)setNumberOfItems:(long long)a0 withChangeDetails:(id)a1 changeMediaVersionHandler:(id /* block */)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemsToLoad;
- (long long)columnForItem:(long long)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(long long)a0;
- (BOOL)shiftItem:(long long)a0 toColumn:(long long)a1 hideIncompleteRows:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_itemsToLoadForAnchorItem:(long long)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)itemsBetweenItem:(long long)a0 andItem:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(long long)a0 usingInterItemSpacing:(double)a1;
- (void)applySpriteChangeDetails:(id)a0 countAfterChanges:(unsigned int)a1 initialState:(id /* block */)a2 modifyState:(id /* block */)a3;
- (void)_updateSprites;
- (long long)itemClosestTo:(struct CGPoint { double x0; double x1; })a0;
- (void)screenScaleDidChange;
- (void)loadedItemsDidChange;
- (void)update;
- (void)visibleRectDidChange;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemRangeInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (id)itemsGeometry;
- (long long)itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (id)diagnosticDescription;
- (void)invalidateLoadedItems;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;

@end
