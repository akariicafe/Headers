@class NSString, UIImageView, _SBFloatingDockPlatterMetrics, UIView;

@interface SBFloatingDockPlatterView : UIView

@property (retain, nonatomic) UIImageView *shadowView;
@property (retain, nonatomic) _SBFloatingDockPlatterMetrics *metrics;
@property (nonatomic) double referenceHeight;
@property (nonatomic) double maximumContinuousCornerRadius;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL hasShadow;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } shadowOutsets;
@property (retain, nonatomic) UIView *backgroundView;

+ (id)borderColorForUserInterfaceStyle:(long long)a0;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBorderVisualStyling;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })shadowOutsetsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_maxShadowViewAlpha;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowOutsetsForMetrics:(id)a0;
- (id)_metricsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsetsForMetrics:(id)a0;
- (id)_shadowImageViewForMetrics:(id)a0;
- (id)_shadowImageForMetrics:(id)a0;

@end
