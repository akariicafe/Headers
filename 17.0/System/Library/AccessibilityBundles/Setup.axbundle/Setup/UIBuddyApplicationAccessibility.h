@interface UIBuddyApplicationAccessibility : __UIBuddyApplicationAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_iosAccessibilityPerformAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (BOOL)_accessibilityCanRequestSetupControllerSafely;
- (BOOL)_accessibilityFinishSetupIfAppropriate;

@end
