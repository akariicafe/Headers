@class NSArray;

@interface SBFPagedScrollView : BSUIScrollView {
    BOOL _changingScrollViewLayout;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visiblePageRange;
@property (copy, nonatomic) NSArray *pageViews;
@property (nonatomic) BOOL gestureEnabled;

- (void)_bs_didScrollWithContext:(struct { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; })a0;
- (void)_updateCurrentPageForScrollOffset;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (struct { struct { double x0; BOOL x1; } x0; struct { double x0; BOOL x1; } x1; })currentScrollInterval;
- (void)_layoutScrollView;
- (struct CGPoint { double x0; double x1; })contentOffsetForPageAtIndex:(unsigned long long)a0;
- (void)_bs_didEndScrolling;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)scrollToPageAtIndex:(unsigned long long)a0 withAnimationSettings:(id)a1 withCompletion:(id /* block */)a2;
- (void)_updateVisiblePages;
- (void)layoutPages;
- (void)_bs_willBeginScrolling;
- (double)unclippedPageRelativeScrollOffset;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)resetContentOffsetToCurrentPage;
- (double)pageRelativeScrollOffset;

@end
