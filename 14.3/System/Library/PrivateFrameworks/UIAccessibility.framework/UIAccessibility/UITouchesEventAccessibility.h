@interface UITouchesEventAccessibility : __UITouchesEventAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (unsigned short)_accessibilityHitTestType;
- (id)_accessibilityHitTestStartsAtElement;
- (void)_setAccessibilityAutomationHitTest:(BOOL)a0;
- (void)_setAccessibilityHitTestType:(unsigned short)a0;
- (BOOL)_accessibilityAutomationHitTest;
- (void)_setAccessibilityHitTestStartsAtElement:(id)a0;

@end
