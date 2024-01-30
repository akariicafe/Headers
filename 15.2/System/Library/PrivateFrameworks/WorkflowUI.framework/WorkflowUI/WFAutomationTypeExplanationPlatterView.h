@class UIStackView, UIImageView, UILabel, UIButton;

@interface WFAutomationTypeExplanationPlatterView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) UILabel *explanationTextLabel;
@property (readonly, nonatomic) UIButton *button;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setIcon:(id)a0;
- (void)setButtonTarget:(id)a0 action:(SEL)a1;
- (void)configureForAutomationType:(unsigned long long)a0;
- (void)setExplanatoryText:(id)a0;
- (void)setButtonTitle:(id)a0 color:(id)a1;
- (id)personalAutomationIcon;
- (id)homeAutomationIcon;
- (id)homeExplanatoryText;
- (id)homeButtonColor;

@end
