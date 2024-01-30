@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>

@property (class, readonly, nonatomic) BOOL wantsDefaultContentAppearance;

@property (nonatomic, setter=_setChromeHidden:) BOOL _chromeHidden;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;

+ (double)cornerRadius;
+ (double)arrowHeight;
+ (double)arrowBase;
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_updateShadow;
- (long long)backgroundStyle;
- (id)_shadowPath;
- (double)_shadowRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (double)_shadowOpacity;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundContentViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsetsForArrowDirection:(unsigned long long)a0;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;
- (void)_updateChrome;

@end
