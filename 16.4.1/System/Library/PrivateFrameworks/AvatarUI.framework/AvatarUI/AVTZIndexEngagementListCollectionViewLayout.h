@class AVTUIEnvironment, NSIndexPath, UICollectionViewUpdateItem;

@interface AVTZIndexEngagementListCollectionViewLayout : AVTEngagementListCollectionViewLayout

@property (retain, nonatomic) UICollectionViewUpdateItem *currentUpdateItem;
@property (nonatomic) double minAlphaFactor;
@property (retain, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) NSIndexPath *backIndexPath;
@property (retain, nonatomic) NSIndexPath *plusButtonIndexPath;

- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (long long)zIndexForElementWithAttributes:(id)a0;
- (double)alphaForElementWithAttributes:(id)a0;
- (double)alphaForPadElementWithEngagement:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })engagementInsetsForCollectionViewBounds:(struct CGSize { double x0; double x1; })a0;
- (id)initWithEngagementLayout:(id)a0 minAlphaFactor:(double)a1 environment:(id)a2;

@end
