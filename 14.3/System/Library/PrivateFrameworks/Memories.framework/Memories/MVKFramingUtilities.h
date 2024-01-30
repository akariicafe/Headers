@interface MVKFramingUtilities : NSObject <Memories.FramingUtilityTestable>

+ (void)load;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extend:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageWithSize:(struct CGSize { double x0; double x1; })a1 targetAspect:(double)a2 projectAspect:(double)a3;
+ (BOOL)rect1:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 equalWithMarginForDimensionalError:(double)a2;

@end
