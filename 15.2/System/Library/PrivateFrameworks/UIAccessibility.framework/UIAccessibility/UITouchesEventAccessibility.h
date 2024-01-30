@interface UITouchesEventAccessibility : __UITouchesEventAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)_setAccessibilityHitTestType:(unsigned short)a0;
- (BOOL)_accessibilityAutomationHitTest;
- (void)_setAccessibilityHitTestStartsAtElement:(id)a0;
- (id)_accessibilityHitTestStartsAtElement;
- (void)_setAccessibilityAutomationHitTest:(BOOL)a0;
- (unsigned short)_accessibilityHitTestType;

@end
