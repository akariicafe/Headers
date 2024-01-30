@interface VideosUI.SyndicationCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSeparatorView;
    void /* unknown type, empty encoding */ syndicationId;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_cellWillBeDisplayed;
- (void)vui_cellDidSelect;

@end
