@class CAFilter;

@interface ASAuthorizationAppleIDButton : UIControl {
    long long _type;
    long long _style;
    CAFilter *_highlightFilter;
}

@property (class, readonly) double defaultCornerRadius;

@property (nonatomic) double cornerRadius;

+ (Class)layerClass;
+ (id)buttonWithType:(long long)a0 style:(long long)a1;

- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithCoder:(id)a0;
- (id)accessibilityLabel;
- (void)_createHighlightFilterIfNecessary;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthorizationButtonType:(long long)a0 authorizationButtonStyle:(long long)a1;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (long long)_ak_buttonType;
- (long long)_ak_buttonStyle;
- (void)_performAnimationToSetHighlighted:(BOOL)a0;

@end
