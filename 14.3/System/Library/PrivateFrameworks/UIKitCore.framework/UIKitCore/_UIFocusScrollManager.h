@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

@interface _UIFocusScrollManager : NSObject

@property (readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollAnimator;
@property (readonly, nonatomic) NSHashTable *activelyScrollingContainers;
@property (readonly, weak, nonatomic) UIScreen *screen;

- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollableContainer:(id)a0 toShowFocusItemWithInfo:(id)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 targetOffset:(struct CGPoint { double x0; double x1; })a3 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (struct CGPoint { double x0; double x1; })_contentOffsetForNonPagingContainer:(id)a0 toShowFocusItemWithInfo:(id)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 targetOffset:(struct CGPoint { double x0; double x1; })a3 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollableContainer:(id)a0 toShowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetOffset:(struct CGPoint { double x0; double x1; })a2 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollableContainer:(id)a0 toShowFocusItem:(id)a1 targetOffset:(struct CGPoint { double x0; double x1; })a2 targetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollableContainer:(id)a0 toShowFocusItemWithInfo:(id)a1;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollableContainer:(id)a0 toShowFocusItemWithInfo:(id)a1;
- (void)animateOffsetOfScrollableContainer:(id)a0 toShowFocusItem:(id)a1;
- (struct CGPoint { double x0; double x1; })currentVelocityForScrollableContainer:(id)a0;
- (void)_ensureFocusItemIsOnscreen:(id)a0 inScrollableContainer:(id)a1;
- (void)_scrollToFocusItemWithInfo:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 inScrollableContainer:(id)a2;
- (struct CGPoint { double x0; double x1; })_contentOffsetForPagingContainer:(id)a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetOffset:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForScrollableContainer:(id)a0;
- (void)cancelScrollingForScrollableContainer:(id)a0;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)a0;
- (BOOL)isScrollingScrollableContainer:(id)a0;
- (id)initWithScreen:(id)a0;

@end
