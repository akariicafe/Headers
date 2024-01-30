@class NSSet, NSDictionary, NTKUpNextCollectionViewFlowLayoutAttributes, NSIndexPath, CLKDevice;

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout {
    CLKDevice *_device;
    NSDictionary *_layoutInfo;
    NSDictionary *_headerLayoutInfo;
    NTKUpNextCollectionViewFlowLayoutAttributes *_decorationLayoutInfo;
    NSSet *_previousSectionsWithHeaders;
    NSSet *_sectionsWithHeaders;
    BOOL _needsHeaderUpdate;
    BOOL _needsInsetsUpdate;
}

@property (nonatomic) double topItemsAlpha;
@property (nonatomic) double headerAlpha;
@property (nonatomic) double topItemsShift;
@property (nonatomic) double statusBarDecorationHeight;
@property (retain, nonatomic) NSIndexPath *topElementIndexPath;
@property (retain, nonatomic) NSIndexPath *bottomElementIndexPath;
@property (nonatomic) double topOffsetForSnapping;
@property (nonatomic) double topOffsetForScrolling;
@property (nonatomic) double lowTransitionScale;
@property (nonatomic) double lowTransitionShift;
@property (nonatomic) double highTransitionScale;
@property (nonatomic) double highTransitionShift;
@property (nonatomic) BOOL useFixedLowTransitionLayout;
@property (nonatomic) double maximumDarkeningAmount;
@property (nonatomic) double highTransitionBottomOffset;
@property (nonatomic, getter=isSnappingEnabled) BOOL snappingEnabled;
@property (nonatomic, getter=isShowingAllAttributes) BOOL showingAllAttributes;
@property (retain, nonatomic) NSIndexPath *indexPathToSnapTo;
@property (nonatomic) double snappingOffset;
@property (readonly, nonatomic) NSSet *dwellIndexPathes;

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)finalizeCollectionViewUpdates;
- (BOOL)_hasHeaderForSection:(long long)a0;
- (id)flowLayoutAttributesForItemAtIndexPath:(id)a0;
- (void)_updateContentInsetsIfNeeded;
- (void)_updateSectionHeaderListIfNeeded;
- (void)_updateVisibilityForLayoutAttributes:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
