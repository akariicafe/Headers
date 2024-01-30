@class NSMutableSet;

@interface MFComposeScrollView : UIScrollView {
    NSMutableSet *_disabledSubviews;
    long long _scrollBlocked;
}

@property (nonatomic) BOOL subviewsDisabled;
@property (nonatomic) BOOL shouldScrollToFirstResponder;

- (void)willRemoveSubview:(id)a0;
- (void).cxx_destruct;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)disableSubview:(id)a0;
- (void)enableSubview:(id)a0;
- (void)beginBlockingScroll;
- (void)endBlockingScroll;
- (void)didAddSubview:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
