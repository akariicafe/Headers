@class FocusableTextView, VUIImageView, VUILabel, _TtC8VideosUI20TomatometerTableView;

@interface VideosUI.CanonicalInfoCardView : VUIBaseView {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ tableView;
}

@property (nonatomic, readonly) VUILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) VUILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) FocusableTextView *accessibilityDescriptionLabel;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) _TtC8VideosUI20TomatometerTableView *accessibilityTableView;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;

@end
