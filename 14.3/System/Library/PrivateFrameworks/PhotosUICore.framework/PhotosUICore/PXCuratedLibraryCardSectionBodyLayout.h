@class PXCuratedLibraryCardSectionBodyLayoutSpec, PXGLayoutGuide, NSString, NSMutableIndexSet, PXCuratedLibrarySectionGeometryDescriptor, PXIndexPathSet, PXAssetsDataSource;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource> {
    unsigned short _assetVersion;
    id<PXDisplayAsset> _keyAsset;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _postUpdateFlags;
    struct _PXGSpriteIndexRange { unsigned int location; unsigned int length; } _assetSpriteIndexRange;
    NSMutableIndexSet *_axSpriteIndexes;
}

@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> keyAssetsFetchResult;
@property (readonly, nonatomic) long long section;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long zoomLevel;
@property (retain, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *spec;
@property (nonatomic) BOOL isSkimming;
@property (retain, nonatomic) PXIndexPathSet *skimmingIndexPaths;
@property (nonatomic) long long maxSkimmingIndex;
@property (nonatomic) long long currentSkimmingIndex;
@property (readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } assetFrame;
@property (readonly, nonatomic) PXGLayoutGuide *assetLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)a0;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (id)layoutForItemChanges;
- (struct CGSize { double x0; double x1; })minSpriteSizeForPresentationStyle:(unsigned long long)a0;
- (void)setDataSource:(id)a0 section:(long long)a1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (id)init;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (id)axSpriteIndexes;
- (void)_updateKeyAssetFetchResultWithDataSource:(id)a0 section:(long long)a1;
- (id)axVisibleSpriteIndexes;
- (void)applySpriteChangeDetails:(id)a0 countAfterChanges:(unsigned int)a1 initialState:(id /* block */)a2 modifyState:(id /* block */)a3;
- (void)_updateSprites;
- (void)screenScaleDidChange;
- (void)update;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)axSelectedSpriteIndexes;
- (void)_updateAXSprites;

@end
