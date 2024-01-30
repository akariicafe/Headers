@class UIColor, NSString, PKIconTextLabel, UIImage, UILabel, UIActivityIndicatorView, UIButton;
@protocol PKPayLaterContentActionFooterViewDelegate;

@interface PKPayLaterContentActionFooterViewContent : UIView {
    UIButton *_button;
    PKIconTextLabel *_leadingTitle;
    UILabel *_leadingDetail;
    UIActivityIndicatorView *_spinnerView;
    id<PKPayLaterContentActionFooterViewDelegate> _delegate;
}

@property (copy, nonatomic) NSString *leadingTitleText;
@property (retain, nonatomic) UIImage *leadingTitleIcon;
@property (retain, nonatomic) UIColor *leadingTitleTextColor;
@property (copy, nonatomic) NSString *leadingDetailText;
@property (retain, nonatomic) UIColor *leadingDetailTextColor;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIColor *buttonTintColor;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (nonatomic) BOOL showSpinner;

+ (id)leadingTitleFont;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureButton;
- (void)_buttonTapped;
- (void)_configureLabels;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
