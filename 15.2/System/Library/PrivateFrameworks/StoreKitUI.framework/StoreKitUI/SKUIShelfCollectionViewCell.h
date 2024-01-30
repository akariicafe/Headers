@class NSString, UICollectionView;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) BOOL rendersWithPerspective;
@property (nonatomic) BOOL rendersWithParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;

- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setPerspectiveTargetView:(id)a0;
- (void)setVanishingPoint:(struct CGPoint { double x0; double x1; })a0;

@end
