@interface VideosUI.SearchListCell : VUIBaseListViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ accessoryImageView;
    void /* unknown type, empty encoding */ buttonView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSeparatorView;
}

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
