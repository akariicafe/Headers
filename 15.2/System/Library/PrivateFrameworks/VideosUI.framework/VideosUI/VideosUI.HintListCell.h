@interface VideosUI.HintListCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ shouldShowBottomSeparator;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accessoryImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSeparatorView;
}

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;

@end
