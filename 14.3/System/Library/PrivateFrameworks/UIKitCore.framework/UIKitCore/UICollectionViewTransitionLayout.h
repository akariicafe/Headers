@class NSMutableArray, UICollectionViewLayout, NSMutableDictionary;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toVisibleBounds;
    struct CGSize { double width; double height; } _contentSize;
    BOOL _haveValidInfos;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    BOOL _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    double _accuracy;
}

@property (nonatomic) double transitionProgress;
@property (readonly, nonatomic) UICollectionViewLayout *currentLayout;
@property (readonly, nonatomic) UICollectionViewLayout *nextLayout;

- (void)invalidateLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)_prepareForTransitionToLayout:(id)a0;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCollectionView:(id)a0;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)a0 toLayoutAttributes:(id)a1 progress:(double)a2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateValue:(double)a0 forAnimatedKey:(id)a1;
- (double)valueForAnimatedKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_prepareForTransitionFromLayout:(id)a0;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)_finalizeLayoutTransition;
- (id)initWithCurrentLayout:(id)a0 nextLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_oldVisibleBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_newVisibleBounds;

@end
