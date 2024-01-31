@interface NowPlayingControlsViewControllerAccessibility : __NowPlayingControlsViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (BOOL)accessibilityPerformEscape;
- (void)setControlsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityResponseTracklist;
- (id)_accessibilityLeftbuttonValueString;
- (id)_accessibilityResponseForViewController;
- (id)_accessibilityResponseTracklistPlayingItem;
- (id)_axLikedBannedValueForState:(long long)a0;
- (id)_axUpNextBadgeValue;
- (BOOL)axAudioRouteNotificationRegistered;
- (BOOL)axLikedStateNotificationRegistered;
- (BOOL)axMediaCommandNotificationRegistered;
- (void)axSetAudioRouteNotificationRegistered:(BOOL)a0;
- (void)axSetLikedStateNotificationRegistered:(BOOL)a0;
- (void)axSetMediaCommandNotificationRegistered:(BOOL)a0;

@end
