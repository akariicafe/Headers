@class UIStackView, NSString, UIView, NSAttributedString, UIMenu, UIButton, UIFocusGuide, NSLayoutConstraint;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView

@property (nonatomic) UIButton *button;
@property (nonatomic) UIStackView *stackView;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (retain, nonatomic) UIFocusGuide *focusGuide;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSAttributedString *attributedButtonTitle;
@property (nonatomic) id buttonTarget;
@property (nonatomic) SEL buttonAction;
@property (nonatomic, getter=isButtonHidden) BOOL buttonHidden;
@property (nonatomic) UIView *backgroundPlatterView;
@property (nonatomic) UIMenu *buttonMenu;

+ (double)defaultHeight;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0 buttonTitle:(id)a1;
+ (double)widthForTitle:(id)a0;
+ (double)widthForTitle:(id)a0 buttonTitle:(id)a1;

- (void)awakeFromNib;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)buttonTitle;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)a0;
- (void)buttonPressed:(id)a0;

@end
