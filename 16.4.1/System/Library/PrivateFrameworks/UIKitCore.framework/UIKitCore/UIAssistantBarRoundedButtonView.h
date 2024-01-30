@class UIAssistantBarRoundedButtonViewButton, UIView;

@interface UIAssistantBarRoundedButtonView : UIView {
    UIView *_shadowView;
}

@property (nonatomic) BOOL dropShadow;
@property (readonly, nonatomic) UIAssistantBarRoundedButtonViewButton *button;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
