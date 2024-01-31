@interface SAUIElementViewAccessibility : __SAUIElementViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_viewToAddFocusLayer;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (BOOL)accessibilityPerformEscape;
- (long long)_accessibilitySortPriority;
- (id)_accessibilityContainerView;
- (void)_accessibilityPrefetchPropertiesIfNecessary;
- (id)_accessibilityRemoteElementDescendant;
- (id)_axGetRemoteContentLabel;
- (BOOL)_axRemoteContentIsGettingElements;
- (void)_axSetRemoteContentIsGettingElements:(BOOL)a0;
- (void)_axSetRemoteContentLabel:(id)a0;

@end
