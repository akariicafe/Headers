@class UIImageView, UILabel;

@interface AMSUIOnboardingFeatureView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) double baselineOffsetFromBottom;

- (void)layoutSubviews;
- (id)initWithFeature:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
