@class _UISearchBarSearchContainerLayout;

@interface _UISearchBarSearchContainerView : UIView {
    BOOL _needsLayoutWhenThawed;
}

@property (retain, nonatomic) _UISearchBarSearchContainerLayout *layout;
@property (nonatomic) BOOL frozenLayout;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (BOOL)_isKnownUISearchBarComponentContainer;

@end
