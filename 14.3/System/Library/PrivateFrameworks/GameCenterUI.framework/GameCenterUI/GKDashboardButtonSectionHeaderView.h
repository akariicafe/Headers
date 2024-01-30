@class UIStackView, NSString, UIView, UIMenu, NSLayoutConstraint, NSAttributedString, UIButton;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView

@property (nonatomic) UIButton *button;
@property (nonatomic) UIStackView *stackView;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSAttributedString *attributedButtonTitle;
@property (nonatomic) id buttonTarget;
@property (nonatomic) SEL buttonAction;
@property (nonatomic, getter=isButtonHidden) BOOL buttonHidden;
@property (nonatomic) UIView *backgroundPlatterView;
@property (nonatomic) UIMenu *buttonMenu;

+ (double)widthForTitle:(id)a0 buttonTitle:(id)a1;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0 buttonTitle:(id)a1;
+ (double)widthForTitle:(id)a0;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0;

- (id)buttonTitle;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)buttonPressed:(id)a0;
- (void)setButtonTitle:(id)a0;

@end
