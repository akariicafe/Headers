@class NSString, UILabel, SKUIGiftDashView;

@interface SKUIGiftConfirmLabeledValue : UIView {
    SKUIGiftDashView *_dashView;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    UILabel *_subtitleLabel;
}

@property (readonly, nonatomic) long long giftConfirmLabelStyle;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *subtitleLabel;
@property (copy, nonatomic) NSString *value;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithGiftConfirmLabelStyle:(long long)a0;

@end
