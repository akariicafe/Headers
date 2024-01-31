@interface OfferButtonAccessibility : __OfferButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (void)accessibilityShowLoading;
- (void)accessibilityShowProgress:(double)a0;
- (void)accessibilityShowRedownload;
- (void)accessibilityShowText:(id)a0;

@end
