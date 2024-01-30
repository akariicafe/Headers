@interface VUIWatchNowTemplateBackgroundLayer : CAGradientLayer

@property (nonatomic) long long uiStyle;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withStyle:(long long)a1;
- (void)updateStyle:(long long)a0;

@end
