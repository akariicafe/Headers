@interface WKNSObjectAccessibility : __WKNSObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityIsVisibleByCompleteHitTest;
- (BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1;
- (BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)a0 toElementMatchingQuery:(id)a1;
- (id)_iosAccessibilityAttributeValue:(long long)a0;
- (id)_iosAccessibilityAttributeValue:(long long)a0 forParameter:(id)a1;
- (BOOL)_iosAccessibilityPerformAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (id)_accessibilityFirstElementForFocusForRemoteElement;

@end
