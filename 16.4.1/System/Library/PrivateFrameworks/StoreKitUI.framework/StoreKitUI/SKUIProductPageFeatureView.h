@class SKUIColorScheme, NSString, UIImageView, UIImage, UILabel;

@interface SKUIProductPageFeatureView : UIView {
    UIImageView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
