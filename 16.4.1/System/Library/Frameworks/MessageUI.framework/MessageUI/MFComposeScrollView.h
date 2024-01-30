@class NSMutableSet;

@interface MFComposeScrollView : UIScrollView {
    NSMutableSet *_disabledSubviews;
    long long _scrollBlocked;
}

@property (nonatomic) BOOL subviewsDisabled;
@property (nonatomic) BOOL shouldScrollToFirstResponder;

- (void)willRemoveSubview:(id)a0;
- (void)didAddSubview:(id)a0;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)disableSubview:(id)a0;
- (void)beginBlockingScroll;
- (void)enableSubview:(id)a0;
- (void)endBlockingScroll;

@end
