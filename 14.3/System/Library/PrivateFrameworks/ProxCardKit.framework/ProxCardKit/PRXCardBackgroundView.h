@interface PRXCardBackgroundView : UIView {
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _containerLayoutMargins;
}

- (void)_updateCornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
