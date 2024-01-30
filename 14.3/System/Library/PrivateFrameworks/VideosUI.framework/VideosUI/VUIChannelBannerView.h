@class VUISeparatorView, NSArray, VUILabel, VUIProductUberBackgroundView, UIView, VUIFocusableTextView, VUIChannelBannerLayout;

@interface VUIChannelBannerView : UIView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) VUIChannelBannerLayout *layout;
@property (retain, nonatomic) UIView *appleTVChannelLogoView;
@property (retain, nonatomic) UIView *subscribeButton;
@property (retain, nonatomic) VUILabel *disclaimerTextLabel;
@property (retain, nonatomic) VUIFocusableTextView *descriptionTextView;
@property (retain, nonatomic) NSArray *textLabels;
@property (retain, nonatomic) VUIProductUberBackgroundView *bgImageView;
@property (readonly, nonatomic) double topThreshold;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)_layoutLabels:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1 maxWidth:(double)a2;

@end
