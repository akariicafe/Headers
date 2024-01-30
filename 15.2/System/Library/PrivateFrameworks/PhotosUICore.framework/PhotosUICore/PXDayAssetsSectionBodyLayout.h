@class PXDayAssetsSectionBodyLayoutSpec;

@interface PXDayAssetsSectionBodyLayout : PXCuratedLibraryAssetsSectionGeneratedLayout <PXGItemsGeometry, PXCuratedLibraryRowBasedLayout>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumItemSize;
@property (retain, nonatomic) PXDayAssetsSectionBodyLayoutSpec *spec;
@property (nonatomic) long long style;
@property (nonatomic) long long numberOfPrecedingAssets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minPlayableSpriteSize;
@property (readonly, nonatomic) double buildingRowContentHeight;
@property (readonly, nonatomic) double buildingRowSpacing;

+ (struct CGSize { double x0; double x1; })estimatedSizeWithReferenceSize:(struct CGSize { double x0; double x1; })a0 spec:(id)a1 style:(long long)a2 numberOfAssets:(long long)a3;

- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (long long)_itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (id)itemsBetweenItem:(long long)a0 andItem:(long long)a1;
- (void)enumerateRowsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (long long)itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })_minSizeOfDominantSprites;
- (id)exploreGenerator;
- (struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (long long)_initialItemInDirection:(unsigned long long)a0;
- (id)init;
- (void)referenceSizeDidChange;
- (void)enumerateHeroSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)contentSizeDidChange;
- (id)_inputItemAtIndex:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sectionRect;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;
- (id)newGenerator;
- (id)itemsGeometry;

@end
