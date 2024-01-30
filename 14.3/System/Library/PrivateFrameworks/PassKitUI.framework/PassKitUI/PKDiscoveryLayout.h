@class NSMutableDictionary;

@interface PKDiscoveryLayout : UICollectionViewLayout {
    NSMutableDictionary *_attributesPerIndexPath;
    NSMutableDictionary *_headersPerIndexPath;
    struct CGSize { double width; double height; } _currentSize;
}

@property (nonatomic) double interimSpacing;
@property (nonatomic) double lineSpacing;

- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)_adjustItems:(id)a0 withLateralMove:(double)a1;

@end
