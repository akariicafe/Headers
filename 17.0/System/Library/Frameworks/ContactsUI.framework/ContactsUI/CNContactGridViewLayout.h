@class NSIndexPath;

@interface CNContactGridViewLayout : UICollectionViewFlowLayout <NSCopying>

@property (nonatomic) BOOL needsUpdateLayout;
@property (nonatomic) double offsetBefore;
@property (nonatomic) double offsetAfter;
@property (nonatomic) double selectedItemWidthOffset;
@property (nonatomic) long long numberOfColumns;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)_animationForReusableView:(id)a0 toLayoutAttributes:(id)a1 type:(unsigned long long)a2;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)_updateLayoutMetrics;

@end
