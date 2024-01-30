@class NSMutableDictionary, UIImageView, _SBFloatingDockPlatterMetrics, NSString, UIView;

@interface SBFloatingDockPlatterView : UIView

@property (retain, nonatomic) UIImageView *shadowView;
@property (retain, nonatomic) _SBFloatingDockPlatterMetrics *metrics;
@property (readonly, nonatomic) NSMutableDictionary *shadowImages;
@property (nonatomic) double referenceHeight;
@property (nonatomic) double maximumContinuousCornerRadius;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (copy, nonatomic) NSString *backdropGroupNamespace;
@property (nonatomic) BOOL hasShadow;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } shadowOutsets;
@property (retain, nonatomic) UIView *backgroundView;

+ (id)borderColorForUserInterfaceStyle:(long long)a0;

- (void)updateBorderVisualStyling;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_maxShadowViewAlpha;
- (id)_metricsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_shadowImageForMetrics:(id)a0 previousMetrics:(id)a1;
- (id)_shadowImageViewForMetrics:(id)a0 previousMetrics:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsetsForMetrics:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowOutsetsForMetrics:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })shadowOutsetsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
