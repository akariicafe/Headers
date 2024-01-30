@class _UISearchBarSearchContainerLayout;

@interface _UISearchBarSearchContainerView : UIView

@property (retain, nonatomic) _UISearchBarSearchContainerLayout *layout;

- (void)setNeedsLayout;
- (void).cxx_destruct;
- (BOOL)_isKnownUISearchBarComponentContainer;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
