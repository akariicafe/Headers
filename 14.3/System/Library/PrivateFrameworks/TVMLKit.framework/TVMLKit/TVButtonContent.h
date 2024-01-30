@class UIColor, NSString, UIVisualEffectView, _TVImageView, UIView, UILabel, IKViewElement;

@interface TVButtonContent : _UIFloatingContentView {
    UIColor *__backgroundColor;
}

@property (readonly, nonatomic, getter=isFocused) BOOL focused;
@property (readonly, nonatomic) UIVisualEffectView *backdropView;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) long long backdropStyle;
@property (readonly, nonatomic) BOOL blurEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) double focusSizeIncrease;
@property (nonatomic) BOOL imageTrailsTextContent;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UILabel *textContentView;
@property (retain, nonatomic) _TVImageView *accessoryView;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) IKViewElement *viewElement;

- (BOOL)canBecomeFocused;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)backgroundColor;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurEffectStyle:(long long)a1 blurEnabled:(BOOL)a2;
- (void)_updateBackgroundColorForState:(unsigned long long)a0;
- (void)_setFocused:(BOOL)a0 animationCoordinator:(id)a1;
- (void)_updateFocusStateWithCoordinator:(id)a0;
- (double)_imageMarginFromText;
- (void)_updateFloaingViewFocusState:(BOOL)a0 coordinator:(id)a1;

@end
