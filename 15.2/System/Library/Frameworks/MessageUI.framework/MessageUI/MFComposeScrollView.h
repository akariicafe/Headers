@class NSMutableSet;

@interface MFComposeScrollView : UIScrollView {
    NSMutableSet *_disabledSubviews;
    long long _scrollBlocked;
}

@property (nonatomic) BOOL subviewsDisabled;
@property (nonatomic) BOOL shouldScrollToFirstResponder;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willRemoveSubview:(id)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)disableSubview:(id)a0;
- (void)enableSubview:(id)a0;
- (void)beginBlockingScroll;
- (void)endBlockingScroll;

@end
