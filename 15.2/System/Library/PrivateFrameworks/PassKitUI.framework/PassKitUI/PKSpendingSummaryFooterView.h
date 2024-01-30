@class PKContinuousButton, NSString, UIColor, UIImage, UILabel, UIView;
@protocol PKSpendingSummaryFooterViewDelegate;

@interface PKSpendingSummaryFooterView : UIView <PKSpendingSummaryFooter> {
    UIView *_separatorView;
    UIView *_topSeparatorView;
    PKContinuousButton *_payButton;
    BOOL _usingCircleButton;
    UIColor *_buttonTitleColor;
    UIColor *_buttonTintColor;
    UIImage *_payButtonImage;
}

@property (weak, nonatomic) id<PKSpendingSummaryFooterViewDelegate> delegate;
@property (readonly, nonatomic) UILabel *leadingTitle;
@property (readonly, nonatomic) UILabel *leadingDetail;
@property (readonly, nonatomic) UILabel *trailingTitle;
@property (readonly, nonatomic) UILabel *trailingDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createSubviews;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)a0;
- (void)setButtonTitle:(id)a0;
- (void)setPayButtonImage:(id)a0;
- (void)setButtonTintColor:(id)a0;
- (void)setButtonTitleColor:(id)a0;
- (id)_payButtonWithCircleLayout:(BOOL)a0;
- (BOOL)isEqualToFooter:(id)a0;

@end
