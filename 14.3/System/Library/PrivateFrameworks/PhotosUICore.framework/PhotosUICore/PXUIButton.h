@class PXUIButtonConfiguration;

@interface PXUIButton : UIButton

@property (copy, nonatomic) PXUIButtonConfiguration *configuration;

+ (BOOL)_cursorInteractionEnabled;

- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pointerRectForCurrentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
