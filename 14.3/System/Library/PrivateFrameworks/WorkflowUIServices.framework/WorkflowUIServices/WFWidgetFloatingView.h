@class WFGradient, WFWidgetFloatingLayer;

@interface WFWidgetFloatingView : UIView

@property (readonly, nonatomic) WFWidgetFloatingLayer *layer;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) BOOL pressed;

+ (Class)layerClass;

- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithConfiguration:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)applyConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
