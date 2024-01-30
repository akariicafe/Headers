@class UIColor, NSString, UIView, MTMaterialView;

@interface MTMaterialShadowView : UIView <MTMaterialViewObserving> {
    UIView *_shadowView;
    MTMaterialView *_captureOnlyMaterialView;
}

@property (readonly, nonatomic) MTMaterialView *materialView;
@property (nonatomic, getter=isCaptureOnlyMaterialViewSuppliedByClient) BOOL captureOnlyMaterialViewSuppliedByClient;
@property (copy, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) BOOL shadowPathIsBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)materialShadowViewWithRecipe:(long long)a0 configuration:(long long)a1;
+ (id)materialShadowViewWithRecipe:(long long)a0 configuration:(long long)a1 initialWeighting:(double)a2;
+ (id)materialShadowViewWithRecipe:(long long)a0 configuration:(long long)a1 initialWeighting:(double)a2 scaleAdjustment:(id /* block */)a3;
+ (id)materialShadowViewWithRecipeNamed:(id)a0 inBundle:(id)a1 configuration:(long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;
+ (id)materialShadowViewWithRecipeNamesByTraitCollection:(id)a0 inBundle:(id)a1 configuration:(long long)a2 initialWeighting:(double)a3 scaleAdjustment:(id /* block */)a4;

- (void)_configureShadowViewIfNecessary;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_configureCaptureOnlyMaterialViewIfNecessary;
- (void)groupNameDidChangeForMaterialView:(id)a0;
- (id)initWithMaterialView:(id)a0;
- (void)recipeNameDidChangeForMaterialView:(id)a0;
- (void)weightingDidChangeForMaterialView:(id)a0;

@end
