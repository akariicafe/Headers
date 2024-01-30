@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {
    id *_attributes;
    double *_headerWidths;
    long long _arrayLength;
}

+ (Class)invalidationContextClass;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)invalidationContextForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_setAttributes:(id)a0 ForSection:(long long)a1;

@end
