@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) CAShapeLayer *buttonLayer;

- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
