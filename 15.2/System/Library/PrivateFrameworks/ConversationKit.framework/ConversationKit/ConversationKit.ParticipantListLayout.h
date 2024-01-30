@interface ConversationKit.ParticipantListLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ indexPathLayoutAttributes;
    void /* unknown type, empty encoding */ lastInvalidatedSize;
    void /* unknown type, empty encoding */ calculatedContentSize;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
