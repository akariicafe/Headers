@interface SKUIProductPageHeaderViewAccessibility : __SKUIProductPageHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setIconImage:(id)a0;
- (void)setUserRating:(double)a0;
- (id)accessibilityElements;
- (BOOL)_accessibilityHitTestReverseOrder;
- (id)accessibilityLabel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame:(id)a0;
- (void)setNumberOfUserRatings:(long long)a0;
- (id)initWithClientContext:(id)a0;

@end
