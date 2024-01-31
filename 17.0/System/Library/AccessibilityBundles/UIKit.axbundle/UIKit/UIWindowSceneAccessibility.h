@interface UIWindowSceneAccessibility : __UIWindowSceneAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityIdentifier;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (id)_accessibilityFBSceneIdentifier;
- (unsigned int)_accessibilityContextId;
- (void)_accessibilityDidFocusOnApplication;
- (BOOL)_accessibilityFocusContainerMoveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1;
- (BOOL)_accessibilityFocusContainerMoveFocusWithHeading:(unsigned long long)a0 toElementMatchingQuery:(id)a1;
- (BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1;
- (BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)a0 toElementMatchingQuery:(id)a1;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityNativeFocusableElements:(id)a0 withQueryString:(id)a1;
- (void)_accessibilitySetFocusEnabledInApplication:(BOOL)a0;
- (id)_accessibilityWindowScene;
- (id)_accessibilityWindowSceneIdentifier;
- (id)_accessibilityFocusSystem;
- (BOOL)_accessibilityIsSecure;
- (BOOL)_accessibilityMoveAppFocusForElementMatchingQuery:(id)a0 heading:(unsigned long long)a1;
- (BOOL)_accessibilitySafeMoveInDirection:(unsigned long long)a0 byGroup:(BOOL)a1 withSearchInfo:(id)a2;

@end
