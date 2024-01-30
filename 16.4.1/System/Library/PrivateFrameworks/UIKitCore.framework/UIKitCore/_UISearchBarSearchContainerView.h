@class _UISearchBarSearchContainerLayout;

@interface _UISearchBarSearchContainerView : UIView {
    BOOL _needsLayoutWhenThawed;
}

@property (retain, nonatomic) _UISearchBarSearchContainerLayout *layout;
@property (nonatomic) BOOL frozenLayout;

- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)description;
- (BOOL)_isKnownUISearchBarComponentContainer;
- (void).cxx_destruct;

@end
