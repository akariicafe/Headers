@class UIFont, NSString, UIColor, PKContinuousButton, UIImage, PKDashboardCreditAccountItem, UILabel;
@protocol PKCreditPaymentDueCellDelegate;

@interface PKCreditPaymentDueCell : PKDashboardCollectionViewCell {
    BOOL _usingCircleButton;
    BOOL _isCompactUI;
    BOOL _isTemplateLayout;
    UILabel *_paymentDueLabel;
    UILabel *_dateLabel;
    UILabel *_detailLabel;
}

@property (weak, nonatomic) id<PKCreditPaymentDueCellDelegate> delegate;
@property (retain, nonatomic) PKDashboardCreditAccountItem *item;
@property (copy, nonatomic) NSString *paymentDueLabelText;
@property (copy, nonatomic) UIFont *paymentDueLabelFont;
@property (copy, nonatomic) UIColor *paymentDueLabelTextColor;
@property (copy, nonatomic) NSString *dateLabelText;
@property (copy, nonatomic) UIFont *dateLabelFont;
@property (copy, nonatomic) UIColor *dateLabelTextColor;
@property (copy, nonatomic) NSString *detailLabelText;
@property (copy, nonatomic) UIFont *detailLabelFont;
@property (copy, nonatomic) UIColor *detailLabelTextColor;
@property (readonly, nonatomic) PKContinuousButton *payButton;
@property (copy, nonatomic) UIColor *payButtonTintColor;
@property (copy, nonatomic) UIColor *payButtonTitleColor;
@property (copy, nonatomic) UIFont *payButtonFont;
@property (nonatomic) BOOL useAccssibilityLayout;
@property (retain, nonatomic) UIImage *payButtonImage;
@property (copy, nonatomic) NSString *fallbackButtonTitle;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)a0;
- (void)_buttonTapped:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_payButtonWithCircleLayout:(BOOL)a0;
- (void)_updateButtonImage:(id)a0;
- (void)createSubviews;

@end
