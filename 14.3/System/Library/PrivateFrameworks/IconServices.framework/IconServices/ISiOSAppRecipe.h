@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe>

@property (nonatomic) unsigned long long options;
@property BOOL shouldApplyMask;
@property BOOL shouldDrawBorder;

- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
