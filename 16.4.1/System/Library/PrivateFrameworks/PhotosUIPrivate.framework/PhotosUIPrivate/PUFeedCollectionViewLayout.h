@class NSMutableArray, PUParallaxComputer;

@interface PUFeedCollectionViewLayout : UICollectionViewLayout {
    PUParallaxComputer *_parallaxComputer;
    NSMutableArray *_sectionLayoutInfos;
    struct CGSize { double width; double height; } _contentSize;
}

@property (nonatomic) long long flowDirection;
@property (readonly, nonatomic) unsigned int flowDirectionEdge;
@property (nonatomic) struct CGSize { double width; double height; } sectionReferenceSize;
@property (nonatomic) struct CGSize { double width; double height; } interTileSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } captionPadding;
@property (nonatomic) struct CGSize { double width; double height; } noCaptionSpacing;
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches;
@property (nonatomic) BOOL shouldApplyParallaxEffect;
@property (nonatomic) long long parallaxModel;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) BOOL shouldFloatThumbnails;
@property (nonatomic) double thumbnailSpacing;
@property (nonatomic) BOOL shouldFloatSectionHeaders;
@property (nonatomic) double sectionHeaderBackgroundHeight;
@property (nonatomic) BOOL shouldFloatWithEase;
@property (nonatomic) BOOL shouldFloatOverShortDistances;
@property (nonatomic) double floatingBottomDecorationHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } floatPadding;

+ (Class)layoutAttributesClass;

- (id)_delegate;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateGlobalLayoutInfoWithOptions:(long long)a0 sectionsWithUpdatedGroupIDs:(out id *)a1;
- (void)_adjustFloatingLayoutAttributes:(id)a0 inSection:(long long)a1;
- (void)_enumerateSectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)_getSize:(out struct CGSize { double x0; double x1; } *)a0 headerSize:(out struct CGSize { double x0; double x1; } *)a1 footerSize:(out struct CGSize { double x0; double x1; } *)a2 fixedLayoutAttributes:(id)a3 tileLayoutAttributes:(id)a4 floatingLayoutAttributes:(id)a5 type:(out long long *)a6 forSection:(long long)a7 isJoined:(BOOL)a8;
- (void)_getSizeForHorizontalFlowDirection:(out struct CGSize { double x0; double x1; } *)a0 headerSize:(out struct CGSize { double x0; double x1; } *)a1 footerSize:(out struct CGSize { double x0; double x1; } *)a2 fixedLayoutAttributes:(id)a3 tileLayoutAttributes:(id)a4 floatingLayoutAttributes:(id)a5 type:(out long long *)a6 forSection:(long long)a7 isJoined:(BOOL)a8;
- (void)_getSizeForVerticalFlowDirection:(out struct CGSize { double x0; double x1; } *)a0 headerSize:(out struct CGSize { double x0; double x1; } *)a1 footerSize:(out struct CGSize { double x0; double x1; } *)a2 fixedLayoutAttributes:(id)a3 tileLayoutAttributes:(id)a4 floatingLayoutAttributes:(id)a5 type:(out long long *)a6 forSection:(long long)a7 isJoined:(BOOL)a8;
- (void)_sectionAtIndex:(long long)a0 sizeDidChangeFrom:(struct CGSize { double x0; double x1; })a1 to:(struct CGSize { double x0; double x1; })a2;
- (void)_updateLayoutInfoForSection:(long long)a0 ignoreSizeChange:(BOOL)a1;
- (void)_updateSectionLayoutInfosIfNecessary;
- (void)enumerateImageElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTileAtIndexPath:(id)a0;
- (id)indexPathForImageElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidateLayoutAndCache;
- (long long)numberOfTilesOmittedInSection:(long long)a0;
- (id)sectionsJoinedWithSection:(long long)a0;
- (void)updateCollectionViewWithDeletedSections:(id)a0 insertedSections:(id)a1 updatedSections:(id)a2;
- (long long)_layoutTilesAndGetNumberOfTilesOmittedWithCollectionView:(id)a0 tileLayoutAttributes:(id)a1 fixedLayoutAttributes:(id)a2 origin:(inout struct CGPoint { double x0; double x1; } *)a3 size:(inout struct CGSize { double x0; double x1; } *)a4 sectionContentSize:(struct CGSize { double x0; double x1; })a5 itemCount:(long long)a6 section:(long long)a7;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutVerticalSectionHeaderIfNecessary:(id)a0 fixedLayoutAttributes:(id)a1 floatingLayoutAttributes:(id)a2 section:(long long)a3;
- (id)_parallaxComputer;
- (void)_setOrigin:(struct CGPoint { double x0; double x1; })a0 forSectionLayoutInfo:(id)a1;
- (void)_updateParallaxComputer;
- (void)_updateParallaxForLayoutAttributes:(id)a0;

@end
