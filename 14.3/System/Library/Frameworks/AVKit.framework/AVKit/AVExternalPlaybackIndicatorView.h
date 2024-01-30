@class UIImageView, UILabel, UIStackView;

@interface AVExternalPlaybackIndicatorView : UIView {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_containerView;
    UIStackView *_textLabelsContainer;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitleString:(id)a0 subtitleString:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
