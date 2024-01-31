@interface VUINowPlayingViewControllerAccessibility : __VUINowPlayingViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityExtendHUDVisibilityTimerStorage;
- (id)_accessibilityAVPlayerViewController;
- (BOOL)_accessibilityDidRegisterForElementFocusedNotification;
- (void)_accessibilityHandleElementFocusedNotification:(id)a0;
- (BOOL)_accessibilityIsExtendingHUDVisibility;
- (void)_accessibilityRescheduleExtendHUDVisibilityTimer;
- (void)_accessibilitySetAVPlayerViewController:(id)a0;
- (void)_accessibilitySetDidRegisterForElementFocusedNotification:(BOOL)a0;
- (void)_accessibilitySetExtendHUDVisibilityTimerStorage:(id)a0;
- (void)_accessibilitySetIsExtendingHUDVisibility:(BOOL)a0;
- (void)updateHUDsForAVPlayerViewController:(id)a0;

@end
