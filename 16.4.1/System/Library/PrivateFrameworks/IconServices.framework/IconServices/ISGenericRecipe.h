@class NSString;

@interface ISGenericRecipe : NSObject <ISCompositorRecipe>

@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) BOOL templateVariant;
@property (nonatomic) BOOL selectedVariant;
@property (nonatomic) unsigned long long borderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
