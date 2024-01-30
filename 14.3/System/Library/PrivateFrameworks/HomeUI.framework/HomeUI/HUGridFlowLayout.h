@class HUWallpaperView, NSMutableDictionary, NSHashTable, HUGridLayoutOptions, HFWallpaperSlice, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout>

@property (readonly, nonatomic) NSMutableDictionary *indexPathsByItems;
@property (readonly, nonatomic) NSMutableDictionary *overrideAttributesByIndexPath;
@property (retain, nonatomic) NSHashTable *childGridLayouts;
@property (weak, nonatomic) HUGridFlowLayout *parentGridLayout;
@property (readonly, nonatomic) BOOL shouldFlipForRTL;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (weak, nonatomic) HUWallpaperView *wallpaperView;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layoutAttributesClass;

- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)a0 withTargetPosition:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)applyOverrideAttributes:(id)a0 toItem:(id)a1 atIndexPath:(id)a2;
- (void)clearOverrideAttributesForItem:(id)a0 atIndexPath:(id)a1;
- (void)clearAllOverrideAttributesForItems:(id)a0;
- (id)initForRTL:(BOOL)a0;
- (id)_modifiedLayoutAttributesForAttributes:(id)a0;
- (void)_updateContainingGridLayout;
- (void)unregisterChildGridLayout:(id)a0;
- (void)registerChildGridLayout:(id)a0;

@end
