@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

@interface _UIFocusScrollManager : NSObject

@property (readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollAnimator;
@property (readonly, nonatomic) NSHashTable *stackVisitedScrollingContainers;
@property (readonly, weak, nonatomic) UIScreen *screen;

- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (BOOL)isScrollingScrollableContainer:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetConsideredCurrentForScrollableContainer:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForNonPagingContainer:(id)a0 toShowFocusItemWithInfo:(id)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 heading:(unsigned long long)a3 targetOffset:(struct CGPoint { double x0; double x1; })a4 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (struct CGPoint { double x0; double x1; })_contentOffsetForPagingContainer:(id)a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetOffset:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollableContainer:(id)a0 toShowFocusItemWithInfo:(id)a1 heading:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollableContainer:(id)a0 toShowFocusItemWithInfo:(id)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 heading:(unsigned long long)a3 targetOffset:(struct CGPoint { double x0; double x1; })a4 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (struct CGPoint { double x0; double x1; })_differentialScrollingContentOffsetForContainer:(id)a0 toShowFocusItemWithInfo:(id)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 heading:(unsigned long long)a3 targetOffset:(struct CGPoint { double x0; double x1; })a4 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (void)_ensureFocusItemIsOnscreen:(id)a0 inEnvironmentScrollableContainer:(id)a1 heading:(unsigned long long)a2;
- (void)_scrollToFocusItemWithInfo:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 inEnvironmentScrollableContainer:(id)a2 heading:(unsigned long long)a3;
- (void)adjustTargetContentOffsetForScrollableContainer:(id)a0 byDelta:(struct CGPoint { double x0; double x1; })a1;
- (void)animateOffsetOfEnvironmentScrollableContainer:(id)a0 toShowFocusItem:(id)a1;
- (void)animateOffsetOfScrollableContainersInParentEnvironmentContainer:(id)a0 toShowFocusItem:(id)a1;
- (void)cancelScrollingForScrollableContainer:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollableContainer:(id)a0 toShowFocusItem:(id)a1 targetOffset:(struct CGPoint { double x0; double x1; })a2 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollableContainer:(id)a0 toShowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetOffset:(struct CGPoint { double x0; double x1; })a2 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGPoint { double x0; double x1; })currentVelocityForScrollableContainer:(id)a0;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForScrollableContainer:(id)a0;

@end
