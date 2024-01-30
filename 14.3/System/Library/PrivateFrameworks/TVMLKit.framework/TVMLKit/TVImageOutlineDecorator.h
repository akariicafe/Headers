@class UIColor;

@interface TVImageOutlineDecorator : TVImageScaleDecorator

@property (readonly, copy, nonatomic) UIColor *outlineColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } outlineWidths;

+ (id)decoratorWithOutlineColor:(id)a0 outlineWidths:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)decoratorIdentifier;
- (void)drawInContext:(id)a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithOutlineColor:(id)a0 outlineWidths:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
