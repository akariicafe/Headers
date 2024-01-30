@interface UIResponderAccessibility : __UIResponderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)_keyCommands;
- (void)dealloc;
- (id)_accessibilityFKAArrowKeysHandled;

@end
