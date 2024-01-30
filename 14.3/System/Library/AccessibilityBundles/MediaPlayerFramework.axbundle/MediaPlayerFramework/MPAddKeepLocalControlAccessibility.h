@interface MPAddKeepLocalControlAccessibility : __MPAddKeepLocalControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setControlStatus:(struct MPAddKeepLocalControlStatus { long long x0; double x1; })a0 animated:(BOOL)a1;
- (id)accessibilityValue;
- (id)_accessibilityLabelForStatusType:(long long)a0;
- (id)_accessibilityValueForStatusType:(long long)a0 andDownloadProgress:(double)a1;
- (id)_accessibilityCustomActionLabelForControlStatus:(long long)a0;
- (void)_accessibilitySetCustomActionLabel:(id)a0;
- (id)_accessibilityCustomActionLabel;

@end
