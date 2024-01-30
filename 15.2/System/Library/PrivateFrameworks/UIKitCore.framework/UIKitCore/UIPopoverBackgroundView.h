@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>

@property (class, readonly, nonatomic) BOOL wantsDefaultContentAppearance;

@property (nonatomic, setter=_setChromeHidden:) BOOL _chromeHidden;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;

+ (double)arrowBase;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)a0;
+ (double)arrowHeight;
+ (double)cornerRadius;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (long long)backgroundStyle;
- (void)layoutSubviews;
- (void)_updateShadow;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_shadowPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundContentViewFrame;
- (double)_shadowOpacity;
- (double)_shadowRadius;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsetsForArrowDirection:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (void)_updateChrome;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;

@end
