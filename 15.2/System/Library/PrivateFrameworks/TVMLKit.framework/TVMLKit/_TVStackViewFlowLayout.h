@class NSArray, IKChangeSet, NSIndexSet;
@protocol _TVStackViewDelegateFlowLayout;

@interface _TVStackViewFlowLayout : UICollectionViewLayout {
    id<_TVStackViewDelegateFlowLayout> _stackViewDelegateFlowLayout;
    struct { BOOL hasShowcaseFactorDidChange; } _stackViewDelegateFlowLayoutFlags;
    NSArray *_oldSectionCellLayoutAttributes;
    IKChangeSet *_changeSet;
    NSIndexSet *_indexesAddedAtEnd;
    struct CGPoint { double x; double y; } _initialContentOffset;
    BOOL _isFullReplace;
    double _lastLayoutWidth;
}

@property (copy, nonatomic) NSArray *sectionCellLayoutAttributes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) long long supplementaryCellSection;
@property (copy, nonatomic) NSArray *supplementaryCellLayoutAttributes;
@property (copy, nonatomic) id /* block */ onPrepareLayout;
@property (nonatomic) double showcaseHeight;
@property (readonly, nonatomic) double showcaseFactor;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)finalizeCollectionViewUpdates;
- (double)_computeShowcaseFactorForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_prepareSectionMetrics;
- (id)_oldLayoutAttributesForItemAtIndexPath:(id)a0;

@end
