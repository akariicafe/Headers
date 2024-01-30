@class NSString, UIColor, NSIndexSet;

@interface PXGPPTGridStackLayout : PXGStackLayout <PXGSublayoutProvider, PXGSolidColorSource, PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource> {
    long long _numberOfItemsPerSection;
    long long _numberOfColumns;
    BOOL _useAssetBadgeDecoration;
    long long _selectionDecorationStyle;
    BOOL _decorated;
    long long _estimatedNumberOfRowsPerSection;
    UIColor *_spriteColor;
    NSIndexSet *_selectedItemsPerSection;
    struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } _assetBadgeInfos[12];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedSpriteIndexesInLayout:(id)a0;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)selectionDecorationStyleInLayout:(id)a0;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;
- (BOOL)wantsFileSizeBadgesInLayout:(id)a0;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })assetBadgeInfoForAsset:(id)a0 atSpriteIndex:(unsigned int)a1 inLayout:(id)a2;
- (BOOL)wantsAssetBadgeDecorationsInLayout:(id)a0;
- (BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)_initializeBadgeInfos;
- (void)_initializeSelectedItems;

@end
