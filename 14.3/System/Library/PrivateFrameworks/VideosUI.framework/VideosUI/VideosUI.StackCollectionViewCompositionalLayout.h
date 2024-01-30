@interface VideosUI.StackCollectionViewCompositionalLayout : UICollectionViewCompositionalLayout

- (id)initWithSection:(id)a0 sectionProvider:(id /* block */)a1 configuration:(id)a2;
- (id)initWithSectionProvider:(id /* block */)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSection:(id)a0 configuration:(id)a1;
- (id)initWithSectionProvider:(id /* block */)a0 configuration:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSection:(id)a0;

@end
