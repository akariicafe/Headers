@class UIView, NSString, NSArray, NSMutableDictionary, MTMaterialShadowView, MTShadowView, NSDictionary, MTMaterialView, NSBundle;

@interface PLPlatterView : UIView <PLPlatterInternal, PLPlatter, MTVisualStylingProviding, MTVisualStylingRequiring, MTMaterialGrouping> {
    MTShadowView *_shadowView;
    BOOL _recipeDynamic;
    NSMutableDictionary *_categoriesToProviders;
    NSDictionary *_recipeNamesByTraitCollection;
    NSBundle *_recipeBundle;
}

@property (readonly, nonatomic) MTMaterialView *backgroundMaterialView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isRecipeDynamic) BOOL recipeDynamic;
@property (readonly, nonatomic) MTMaterialShadowView *backgroundMaterialShadowView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL usesBackgroundView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long materialRecipe;
@property (nonatomic) struct { float opacity; struct CGSize { double width; double height; } offset; double radius; } shadowAttributes;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } shadowOutsets;
@property (readonly, nonatomic) UIView *customContentView;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *materialGroupNameBase;

+ (id)platterViewWithStyle:(id)a0;
+ (id)platterViewWithBlurEffectStyle:(long long)a0;
+ (id)platterViewWithStyle:(id)a0 inBundle:(id)a1;

- (id)initWithRecipe:(long long)a0;
- (void).cxx_destruct;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_layoutShadowView;
- (id)_newDefaultBackgroundView;
- (void)_configureBackgroundViewIfNecessary;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_configureCustomContentView;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (id)initWithRecipeNamesByTraitCollection:(id)a0 inBundle:(id)a1;
- (id)_newCarPlayBannerStrokeView;
- (id)_initWithNavigationBannerStyle;
- (id)_initWithCarPlayBannerStyle;
- (id)_initWithNotificationsBannerStyle;
- (id)_initWithBlurEffectStyle:(long long)a0;
- (id)_initWithRecipe:(long long)a0 orRecipeNamesByTraitCollection:(id)a1 inBundle:(id)a2;
- (void)_configureBackgroundView:(id)a0;
- (BOOL)_isMaterialViewSufficientlySpecified;
- (void)_willRemoveCustomContent:(id)a0;

@end
