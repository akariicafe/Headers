@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView

@property (nonatomic) UIPageController *pageController;

- (void)_scrollViewAnimationEnded:(id)a0 finished:(BOOL)a1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)a0;
- (void)_scrollViewWillBeginDragging;
- (void)_scrollViewDidEndDecelerating;
- (unsigned long long)_abuttedPagingEdges;

@end
