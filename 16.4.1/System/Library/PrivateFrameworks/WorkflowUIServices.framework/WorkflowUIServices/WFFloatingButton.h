@class WFFloatingLayer, WFGradient;

@interface WFFloatingButton : UIButton

@property (readonly, nonatomic) WFFloatingLayer *layer;
@property (copy, nonatomic) WFGradient *gradient;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)applyConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
