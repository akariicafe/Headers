@class UIView;
@protocol UIScrollViewDelegate, TSKScrollViewDelegate;

@interface TSKScrollView : UIScrollView {
    unsigned long long mAnimatingContentOffsetCount;
}

@property (nonatomic) id<UIScrollViewDelegate, TSKScrollViewDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic) BOOL mayPassScrollEventsToNextResponder;
@property (nonatomic) BOOL shouldDisableScrollingWhenCursorIsHidden;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollableAreaBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tsk_bounds;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })tsk_contentSize;
- (void)hideScrollIndicators;

@end
