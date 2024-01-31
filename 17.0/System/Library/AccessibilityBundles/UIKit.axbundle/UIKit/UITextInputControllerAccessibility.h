@interface UITextInputControllerAccessibility : __UITextInputControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)toggleItalics:(id)a0;
- (void)cut:(id)a0;
- (void)toggleBoldface:(id)a0;
- (void)selectAll:(id)a0;
- (void)toggleUnderline:(id)a0;
- (void)copy:(id)a0;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)a0 selection:(BOOL)a1;
- (void)paste:(id)a0;

@end
