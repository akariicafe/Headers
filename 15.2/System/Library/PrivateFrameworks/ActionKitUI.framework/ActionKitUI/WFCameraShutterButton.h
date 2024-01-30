@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) CAShapeLayer *buttonLayer;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end
