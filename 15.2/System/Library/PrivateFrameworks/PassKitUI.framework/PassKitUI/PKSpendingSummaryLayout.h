@class NSMutableDictionary;

@interface PKSpendingSummaryLayout : UICollectionViewLayout {
    NSMutableDictionary *_attributesPerIndexPath;
    NSMutableDictionary *_headersPerIndexPath;
    NSMutableDictionary *_footersPerIndexPath;
    struct CGSize { double width; double height; } _currentSize;
}

@property (nonatomic) BOOL isLowEndDevice;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) double transitionAlpha;
@property (nonatomic) double lastDrawnAlpha;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (void).cxx_destruct;
- (id)init;
- (double)_lineSpacingForSection:(long long)a0;
- (void)_adjustItems:(id)a0 withLateralMove:(double)a1;
- (long long)_horizontalAlignmentForSection:(long long)a0;
- (double)alphaForIndexPath:(id)a0 visible:(BOOL)a1 transition:(double)a2;

@end
