@interface UINavigationItemAccessibility : __UINavigationItemAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setTitleView:(id)a0;
- (void)setHidesSearchBarWhenScrolling:(BOOL)a0;
- (BOOL)hidesSearchBarWhenScrolling;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_voiceOverStatusChanged;
- (void)_switchControlStatusChanged;

@end
