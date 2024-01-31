@interface SafariUIPageControlAccessibility : __SafariUIPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (BOOL)_accessibilityAdjustInDirection:(BOOL)a0;

@end
