@interface ConversationKit.ParticipantListLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ indexPathLayoutAttributes;
    void /* unknown type, empty encoding */ lastInvalidatedSize;
    void /* unknown type, empty encoding */ calculatedContentSize;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
