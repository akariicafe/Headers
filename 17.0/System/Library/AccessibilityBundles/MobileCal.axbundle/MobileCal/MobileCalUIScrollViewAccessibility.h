@interface MobileCalUIScrollViewAccessibility : __MobileCalUIScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
- (id)_accessibilityFirstContainedElementForTechnology:(id)a0 honoringGroups:(BOOL)a1 shouldAlwaysScroll:(BOOL)a2;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_accessibilityVisibleContentInset;

@end
