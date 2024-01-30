@class UIImageView, UIImage, UILabel, UIButton;

@interface SKUIRedeemCameraLandingView : UIView {
    UILabel *_bodyLabel;
    UILabel *_headerLabel;
    UIImageView *_imageView;
}

@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long spacingStyle;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;

@end
