@interface ISiOSAppClipRecipe : NSObject <ISCompositorRecipe>

@property BOOL shouldOnlyDrawBorder;
@property BOOL shouldDrawPlaceholder;

- (id)blurRadius;
- (id)appRect;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
