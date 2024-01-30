@interface UITexturedButton : UIButton

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (long long)buttonType;
- (id)backgroundImageForState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleColorForState:(unsigned long long)a0;
- (id)titleShadowColorForState:(unsigned long long)a0;
- (void)setBackgroundImage:(id)a0 forStates:(unsigned long long)a1;
- (void)setTitleShadowColor:(id)a0 forStates:(unsigned long long)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setTitleColor:(id)a0 forStates:(unsigned long long)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
