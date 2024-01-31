@interface WGWidgetAttributionViewAccessibility : __WGWidgetAttributionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityAttributedValue;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_configureAttributedString;
- (BOOL)_axIsStockWidget;
- (BOOL)_axIsWeatherWidget;
- (void)_axSetIsStockWidget:(BOOL)a0;
- (void)_axSetIsWeatherWidget:(BOOL)a0;

@end
