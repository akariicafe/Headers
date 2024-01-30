@class UIColor, _TVImageView, TVButtonContent, IKViewElement, UIView, _UIFloatingContentView, UILabel;

@interface TVButton : UIControl

@property (readonly, nonatomic) _UIFloatingContentView *floatingView;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) long long backdropStyle;
@property (readonly, nonatomic) BOOL blurEnabled;
@property (readonly, nonatomic) TVButtonContent *buttonContent;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) double focusSizeIncrease;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UILabel *textContentView;
@property (retain, nonatomic) _TVImageView *accessoryView;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (copy, nonatomic) id /* block */ selectActionHandler;
@property (copy, nonatomic) id /* block */ playActionHandler;

+ (id)_buttonContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurEffectStyle:(long long)a1 blurEnabled:(BOOL)a2;

- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setEnabled:(BOOL)a0;
- (void)setGroupName:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)backgroundColor;
- (void)setContentMotionRotation:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setCornerRadius:(double)a0;
- (void)setBackgroundColor:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)setImageTrailsTextContent:(BOOL)a0;
- (void)_selectButtonAction:(id)a0;
- (void)_playButtonAction:(id)a0;
- (void)tv_setLayout:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurEffectStyle:(long long)a1 blurEnabled:(BOOL)a2;
- (void)_updateBackgroundColorForState:(unsigned long long)a0;
- (void)_setFocused:(BOOL)a0 animationCoordinator:(id)a1;
- (void)_updateFocusStateWithCoordinator:(id)a0;
- (void)updatePreferredFocusedViewStateForFocus:(BOOL)a0;

@end
