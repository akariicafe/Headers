@interface VideosUI.SearchListCell : VUIBaseListViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ cellImageView;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ accessoryImageView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSeparatorView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ buttonView;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
