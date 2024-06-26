@class PXGLayout;
@protocol PXGLayoutContentSource, PXGItemsGeometry, PXGItemsLayoutDelegate;

@interface PXGItemsLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _loadedItemsUpdateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned long long _delegateRespondsTo;
    long long _applyingItemChangesCount;
    long long *_currentStylableItems;
    long long *_pendingStylableItems;
    BOOL *_pendingAnimations;
    long long *_styleableAnimations;
    double *_stylablePaddings;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _accessoryItemsUpdateFlags;
    PXGLayout *_accessoryItemsContainerLayout;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } loadedItems;
@property (nonatomic) long long _numberOfItems;
@property (readonly, nonatomic) id<PXGItemsLayoutDelegate> marginDelegate;
@property (readonly, nonatomic) id<PXGItemsLayoutDelegate> insetDelegate;
@property (nonatomic, getter=isLazy) BOOL lazy;
@property (weak, nonatomic) id<PXGItemsLayoutDelegate> delegate;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long numberOfAccessoryItems;
@property (weak, nonatomic) id<PXGLayoutContentSource> accessoryItemContentSource;
@property (readonly, nonatomic) BOOL isApplyingItemChanges;
@property (retain, nonatomic) id dropTargetObjectReference;
@property (nonatomic) unsigned long long dropTargetStyle;
@property (readonly, nonatomic) id<PXGItemsGeometry> itemsGeometry;

- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (id)layoutForItemChanges;
- (id)axVisibleSpriteIndexes;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willUpdate;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemsToLoad;
- (struct CGSize { double x0; double x1; })sizeForItem:(long long)a0;
- (id)axSpriteIndexes;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (void)dropTargetObjectReferenceDidChange;
- (void)loadedItemsDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)numberOfAccessoryItemsDidChange;
- (void)didUpdate;
- (id)description;
- (void)accessoryItemsDidChange;
- (void)effectsDidChange;
- (void)setNumberOfItems:(long long)a0 withChangeDetails:(id)a1 changeMediaVersionHandler:(id /* block */)a2;
- (void)update;
- (void).cxx_destruct;
- (id)init;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (void)invalidateLoadedItems;
- (void)dealloc;
- (id)itemsLayout;
- (void)setNumberOfItems:(long long)a0 withChangeDetails:(id)a1;
- (void)setItem:(long long)a0 forStylableType:(long long)a1 animated:(BOOL)a2;
- (void)setAnimationParameters:(struct { long long x0; double x1; })a0 forStylableType:(long long)a1;
- (void)invalidateEffects;
- (unsigned int)spriteIndexForItem:(long long)a0;
- (id)itemsForSpriteIndexes:(id)a0;
- (id)spriteIndexesForItems:(id)a0;
- (id)loadedItemsForItems:(id)a0;
- (BOOL)spriteIndexIsItem:(unsigned int)a0;
- (BOOL)spriteIndexIsAccessoryItem:(unsigned int)a0;
- (long long)accessoryItemForSpriteIndex:(unsigned int)a0;
- (unsigned int)spriteIndexForAccessoryItem:(long long)a0;
- (BOOL)shouldInvalidateDecorationForModifiedSprites;
- (void)updateLoadedItemsIfNeeded;
- (void)_updateLoadedItems;
- (void)invalidateStylableType:(long long)a0;
- (void)_updateFocusedItemIfNeeded;
- (void)_updateHoveredItemIfNeeded;
- (void)_updateStylableType:(long long)a0;
- (void)_invalidateAccessoryItems;
- (void)updateAccessoryItemsIfNeeded;
- (void)_updateAccessoryItems;
- (void)beginApplyingItemChanges;
- (void)endApplyingItemChanges;
- (BOOL)delegateRespondsTo:(unsigned long long)a0;
- (long long)itemForObjectReference:(id)a0;
- (long long)itemForObjectReference:(id)a0 options:(unsigned long long)a1;
- (id)objectReferenceForItem:(long long)a0;
- (void)modifyAccessoryItemSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 state:(id /* block */)a1;
- (void)_handleFocusChangeWithUserInfo:(id)a0;
- (void)_handleSelectionChangeWithUserInfo:(id)a0;

@end
