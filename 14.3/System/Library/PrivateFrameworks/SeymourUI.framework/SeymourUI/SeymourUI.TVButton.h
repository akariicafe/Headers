@class UILabel;

@interface SeymourUI.TVButton : UIControl {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ floatingView;
    void /* unknown type, empty encoding */ backgroundVisualEffectView;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ focusedTextColor;
    void /* unknown type, empty encoding */ unfocusedTextColor;
    void /* unknown type, empty encoding */ underlyingControlState;
    void /* unknown type, empty encoding */ underlyingContentInset;
    void /* unknown type, empty encoding */ leadingConstraint;
    void /* unknown type, empty encoding */ trailingConstraint;
    void /* unknown type, empty encoding */ isSystemImage;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
