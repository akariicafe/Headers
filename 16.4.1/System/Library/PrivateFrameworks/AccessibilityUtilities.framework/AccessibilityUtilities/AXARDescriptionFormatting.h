@interface AXARDescriptionFormatting : NSObject

+ (id)_descriptionForDistance:(float)a0;
+ (double)_valueForPercentageFromRawValue:(double)a0;
+ (id)_visibilityDescriptionForObjectFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)descriptionForDistance:(float)a0 objectFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
