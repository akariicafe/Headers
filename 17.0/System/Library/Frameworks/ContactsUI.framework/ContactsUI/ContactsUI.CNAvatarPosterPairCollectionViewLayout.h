@interface ContactsUI.CNAvatarPosterPairCollectionViewLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ itemRevealProgressProvider;
    void /* unknown type, empty encoding */ itemSize;
    void /* unknown type, empty encoding */ minimumInterimSpacing;
    void /* unknown type, empty encoding */ scrollDirection;
    void /* unknown type, empty encoding */ cardSizeMultiplier;
    void /* unknown type, empty encoding */ maximumVerticalRevealFraction;
    void /* unknown type, empty encoding */ contentBounds;
    void /* unknown type, empty encoding */ cachedAttributes;
    void /* unknown type, empty encoding */ cachedSupplementaryFooterAttributes;
    void /* unknown type, empty encoding */ itemRevealProgresses;
    void /* unknown type, empty encoding */ itemIndexPathsToDelete;
    void /* unknown type, empty encoding */ indexPathToMaintainForTransition;
}

@property (nonatomic, readonly) BOOL flipsHorizontallyInOppositeLayoutDirection;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
