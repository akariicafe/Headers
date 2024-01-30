@class VUIButton, VUIImageView, UIView;

@interface VideosUI.CollectionHeaderView : UICollectionReusableView {
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ viewLayout;
    void /* unknown type, empty encoding */ applySafeAreaInsets;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ subtitleView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ buttonView;
}

@property (nonatomic, readonly) UIView *accessibilityTitleView;
@property (nonatomic, readonly) UIView *accessibilitySubtitleView;
@property (nonatomic, readonly) VUIButton *accessibilityButtonView;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
