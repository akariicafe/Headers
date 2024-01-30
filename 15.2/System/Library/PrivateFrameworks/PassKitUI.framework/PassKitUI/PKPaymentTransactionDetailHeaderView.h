@class NSString, UIImageView, UIImage, UILabel;

@interface PKPaymentTransactionDetailHeaderView : UIView {
    UILabel *_amountLabel;
    UILabel *_subtitleLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    BOOL _isTemplateLayout;
    UIImageView *_merchantIconImageView;
}

@property (nonatomic) BOOL inBridge;
@property (copy, nonatomic) NSString *amountText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *secondarySubtitleText;
@property (copy, nonatomic) NSString *tertiarySubtitleText;
@property (copy, nonatomic) UIImage *merchantIcon;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
