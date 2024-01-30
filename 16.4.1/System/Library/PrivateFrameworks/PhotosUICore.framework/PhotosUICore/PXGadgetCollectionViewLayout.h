@class NSString, PXGadgetSpec;
@protocol PXGadgetCollectionViewLayoutDelegate;

@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) PXGadgetSpec *spec;
@property (weak, nonatomic) id<PXGadgetCollectionViewLayoutDelegate> delegate;
@property (nonatomic) BOOL prefersPagingEnabled;
@property (nonatomic) long long pageSizeClass;
@property (nonatomic) BOOL isPageFullColumnnWidth;
@property (nonatomic) double columnWidth;
@property (nonatomic) double interSectionSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setScrollDirection:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (BOOL)_disablesDoubleSidedAnimations;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)_buttonTypeForGadget:(id)a0;
- (BOOL)_hasButtonForGadget:(id)a0;
- (unsigned long long)_sectionHeaderStyleForGadget:(id)a0;
- (BOOL)_shouldShowSectionHeaderForGadget:(id)a0;
- (id)_titleForGadget:(id)a0;
- (void)_updateMinimumLineSpacing;

@end
