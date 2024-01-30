@class NSArray, UIView;
@protocol NCIntegerIndicatorBadging;

@interface NCBadgedIconView : UIView

@property (retain, nonatomic) UIView *iconView;
@property (nonatomic) double iconViewCornerRadius;
@property (retain, nonatomic) NSArray *badgeViews;
@property (readonly, nonatomic) UIView<NCIntegerIndicatorBadging> *integerIndicatorbadgeView;

+ (id)brandingBadgeWithImage:(id)a0;
+ (unsigned long long)_defaultDirectionForBadgeType:(long long)a0;
+ (id)integerIndicatorBadgeWithCount:(unsigned long long)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForBrandingBadgeOfSize:(struct CGSize { double x0; double x1; })a0 withLocation:(unsigned long long)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithIconView:(id)a0 andIntegerIndicatorBadgeWithCount:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndicatorBadgeOfSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 withLocation:(unsigned long long)a2 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)requiredVisualStyleCategories;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForBadgeView:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForBrandingBadgeView:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)initWithIconView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndicatorBadgeView:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
