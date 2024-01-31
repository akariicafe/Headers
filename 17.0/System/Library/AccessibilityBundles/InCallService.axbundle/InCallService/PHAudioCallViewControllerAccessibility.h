@interface PHAudioCallViewControllerAccessibility : __PHAudioCallViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityAnnounceIncomingCall;
- (BOOL)_accessibilityHasSubscribedForBottomBarNotifications;
- (BOOL)_accessibilityWantsToShowKeypad;
- (void)_accessibilityBottomBarStoppedAnimating:(id)a0;
- (BOOL)_accessibilityDidAnnounceIncomingCall;
- (long long)_accessibilityMiddleViewStateDepth;
- (void)_accessibilitySetDidAnnounceIncomingCall:(BOOL)a0;
- (void)_accessibilitySetHasSubscribedToBottomBarNotifications:(BOOL)a0;
- (void)_accessibilitySetMiddleViewStateDepth:(long long)a0;
- (void)_accessibilitySetWantsToShowKeypad:(BOOL)a0;
- (void)_accessibilitySubscribeForBottomBarNotificationsIfNecessary;
- (void)_axSetPhoneToMiddleState:(unsigned short)a0 totalTimeTried:(double)a1;
- (void)setCurrentState:(unsigned short)a0 animated:(BOOL)a1;
- (void)setMiddleViewState:(unsigned short)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
