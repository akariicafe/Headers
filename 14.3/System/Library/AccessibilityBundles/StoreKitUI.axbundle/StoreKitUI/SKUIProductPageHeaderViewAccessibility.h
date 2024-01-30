@interface SKUIProductPageHeaderViewAccessibility : __SKUIProductPageHeaderViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (id)initWithClientContext:(id)a0;
- (void)setIconImage:(id)a0;
- (void)setUserRating:(double)a0;
- (id)accessibilityLabel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame:(id)a0;
- (BOOL)_accessibilityHitTestReverseOrder;
- (void)setNumberOfUserRatings:(long long)a0;

@end
