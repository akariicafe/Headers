@class NSArray;

@interface SBFPagedScrollView : BSUIScrollView {
    BOOL _changingScrollViewLayout;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visiblePageRange;
@property (copy, nonatomic) NSArray *pageViews;
@property (nonatomic) BOOL gestureEnabled;

- (void)_updateVisiblePages;
- (void)layoutSubviews;
- (double)unclippedPageRelativeScrollOffset;
- (void)_updateCurrentPageForScrollOffset;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutScrollView;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (double)pageRelativeScrollOffset;
- (void).cxx_destruct;
- (void)layoutPages;
- (void)_bs_didEndScrolling;
- (struct CGPoint { double x0; double x1; })contentOffsetForPageAtIndex:(unsigned long long)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)resetContentOffsetToCurrentPage;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 withAnimationSettings:(id)a1 withCompletion:(id /* block */)a2;
- (void)_bs_didScrollWithContext:(struct { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; })a0;
- (void)_bs_willBeginScrolling;
- (struct { struct { double x0; BOOL x1; } x0; struct { double x0; BOOL x1; } x1; })currentScrollInterval;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;

@end
