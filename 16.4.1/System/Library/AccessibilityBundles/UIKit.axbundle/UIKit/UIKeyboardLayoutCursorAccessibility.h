@interface UIKeyboardLayoutCursorAccessibility : __UIKeyboardLayoutCursorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setSelectedKeyIndex:(long long)a0;
- (id)_accessibilityLastFocusChangeNotificationTimer;
- (void)_accessibilitySetLastFocusChangeNotificationTimer:(id)a0;
- (void)_axPostFocusChangeNotification;

@end
