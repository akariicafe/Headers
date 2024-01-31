@interface NCNotificationShortLookViewAccessibility : __NCNotificationShortLookViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (void)setTitle:(id)a0;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScroll:(long long)a0;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityBannerIsSticky;
- (BOOL)_accessibilityIsBannerNotificationElement;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (BOOL)_accessibilityResetBannerTimer;
- (BOOL)_axShowLongLook;
- (id)_axNCNotificationViewController;
- (id)_accessibilityListViewParent;
- (BOOL)_axDismiss;
- (BOOL)_axDismissAction:(id)a0;
- (BOOL)_axIsGrouped;
- (BOOL)_axMore:(id)a0;
- (void)_axPerformBlockOnNotificationController:(id /* block */)a0;
- (void)_axSetShortViewTitle:(id)a0;
- (id)_axShortViewTitle;

@end
