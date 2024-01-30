@interface ISGenericRecipe : NSObject <ISCompositorRecipe>

@property (nonatomic) unsigned long long options;

- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
