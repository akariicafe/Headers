@class IKColor;

@interface VUITintedImageDecorator : VUIImageScaleDecorator

@property (readonly, retain, nonatomic) IKColor *tintColor;

- (void).cxx_destruct;
- (id)initWithTintColor:(id)a0;
- (id)decoratorIdentifier;
- (void)drawInContext:(id)a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
