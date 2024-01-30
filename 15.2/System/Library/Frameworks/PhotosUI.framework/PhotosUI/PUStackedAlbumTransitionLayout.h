@class PUCollectionViewLayoutCache;

@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout {
    struct CGPoint { double x; double y; } _expandedStackDelta;
    BOOL _didPrepareLayout;
    PUCollectionViewLayoutCache *_currentLayoutCache;
    PUCollectionViewLayoutCache *_nextLayoutCache;
}

@property (readonly, nonatomic) BOOL isExpanding;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } expandedStackFinalDelta;
@property (nonatomic) struct CGPoint { double x; double y; } interactionOffset;
@property (nonatomic) struct CGPoint { double x; double y; } initialCollapsedStackCenter;
@property (nonatomic) struct CGPoint { double x; double y; } finalCollapsedStackCenter;
@property (nonatomic) struct CGPoint { double x; double y; } currentCollapsedStackCenter;

- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCurrentLayout:(id)a0 nextLayout:(id)a1 isExpanding:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })_newCenterForLayoutAttributes:(id)a0 transitionProgress:(double)a1;
- (struct CGPoint { double x0; double x1; })_centerOfLayoutAttributes:(id)a0;

@end
