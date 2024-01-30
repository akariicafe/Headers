@interface UITouchesEventAccessibility : __UITouchesEventAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)_accessibilityAutomationHitTest;
- (id)_accessibilityHitTestStartsAtElement;
- (unsigned short)_accessibilityHitTestType;
- (void)_setAccessibilityAutomationHitTest:(BOOL)a0;
- (void)_setAccessibilityHitTestStartsAtElement:(id)a0;
- (void)_setAccessibilityHitTestType:(unsigned short)a0;

@end
