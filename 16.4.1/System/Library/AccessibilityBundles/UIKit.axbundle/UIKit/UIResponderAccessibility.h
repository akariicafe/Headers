@interface UIResponderAccessibility : __UIResponderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (void)dealloc;
- (id)_keyCommands;
- (id)_accessibilityFKAArrowKeysHandled;

@end
