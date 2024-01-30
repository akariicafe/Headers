@interface UITextInputControllerAccessibility : __UITextInputControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)toggleItalics:(id)a0;
- (void)cut:(id)a0;
- (void)selectAll:(id)a0;
- (void)toggleBoldface:(id)a0;
- (void)paste:(id)a0;
- (void)copy:(id)a0;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)a0 selection:(BOOL)a1;
- (void)toggleUnderline:(id)a0;
- (void)_accessibilityUpdateSelectionNotification:(id)a0;
- (id)_axTextInputResponderAccessibilityParentElementForDelegate:(id)a0;

@end
